#include "process2.h"
#include <stdlib.h>

void process2(int **array, int *size){
    int col = *size;
    if (col != 0) {
        for (int i = 0; i < col-1; i++) {
            col ++;
            (*array) = realloc(*array, col* sizeof(int));
            for (int k = col-1; k > i+1; k--){
                (*array)[k] = (*array)[k - 1];
            }
            (*array)[i+1] = ((*array)[i]+(*array)[i+2])/2;
            i++;
        }
    }
    *size = col;
}