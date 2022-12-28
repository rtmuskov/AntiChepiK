#include "process3.h"
#include <stdlib.h>
#include <stdio.h>
void process3(int **array, int *size) {
    int col = *size;
    if (col != 0) {
        for (int i = 0; i < col; i++) {
            for (int j = i + 1; j < col; j++) {
                if ((*array[i]) == (*array[j])) {
                    col--;
                    for (int k = i; k < col - 1; k++) {
                        (*array)[k] = (*array)[k + 1];
                    }
                    (*array) = realloc(*array, col * sizeof(int));
                }
            }

        }
    }
    *size = col;
}
