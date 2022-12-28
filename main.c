#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "process.h"
#include "process2.h"
#include "process3.h"
int* input(int* num)
{
    int i,n;
    printf("Input number of elements: ");
    scanf("%d",&n);
    int * a = malloc(n*sizeof(int));
    for(i = 0; i < n; i++)
    {
        a[i] = rand() % 10;
        if (rand() % 2)
            a[i] *= -1;
        printf("a[%d] = %d\n",i, a[i]);
    }
    *num = n;
    return a;
}
int* input2(int* num)
{
    int i,n;
    printf("Input number of elements: ");
    scanf("%d",&n);
    int * a = malloc(n*sizeof(int));
    for(i = 0; i < n; i++)
    {
        printf("a[%d] = ",i);
        scanf("%d", &a[i]);
    }
    *num = n;
    return a;
}

void output(int *a, int n)
{
    int i;
    for(i = 0; i < n; i++)
    {
        printf("a[%d] = %d\n",i, a[i]);
    }
}

int main() {
    srand(time(NULL));
    int size;
    int flag = 0;
    int *array = input2(&size);
    printf("Printed number func: ");
    scanf("%d", &flag);
    if(flag == 1) process(&array, &size);
    if(flag == 2) process2(&array, &size);
    if(flag == 3) process3(&array, &size);
    output(array, size);
    free(array);
    return 0;
}