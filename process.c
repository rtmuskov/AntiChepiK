#include "process.h"
#include <stdlib.h>

void process(int **array, int *size) {
    int col = *size;
    if (col != 0) {
        for (int i = 0; i < col; i++) {
            if ((*array)[i] < 0) {
                for (int k = i; k < col - 1; k++) {
                    (*array)[k] = (*array)[k + 1];
                }
                (*array) = realloc(*array, (col - 1)* sizeof(int));
                col--;
                i--;
            }
            else if ((*array)[i] > 0){
                (*array) = realloc(*array, (col + 1)* sizeof(int));
                for (int k = col; k > i; k--){
                    (*array)[k] = (*array)[k - 1];
                }
                col++;
                i++;
            }
        }
    }
    *size = col;
}