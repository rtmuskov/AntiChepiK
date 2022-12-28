#include "process6.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#define DELIM " \t"

char *process6(const char *str) {
    char *ans = calloc(strlen(str) + 1, sizeof(char));
    char *point = strdup(str);
    int lenA = strlen(ans);
    char *word = strtok(point, DELIM);
    while (word != NULL) {
        int w_len = strlen(word);
        char temp;
        int j = 0;
        if (w_len == 2) {
            temp = word[0];
            word[0] = word[1];
            word[1] = temp;
            ans = strcat(ans, word);
            word = strtok(NULL, DELIM);
            if (word != NULL)
                ans = strcat(ans, " ");
            continue;
        }
        int mid = w_len / 2;
        for (int i = (w_len - 1); i > mid; i--){
            temp = word[i];
            word[i] = word[j];
            word[j] = temp;
            j++;
        }
        ans = strcat(ans, word);
        word = strtok(NULL, DELIM);
        if (word != NULL)
            ans = strcat(ans, " ");
    }
    printf("input:%s\n", str);
    printf("output:%s\n", ans);
    return ans;
}