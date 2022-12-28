#include "process5.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *process5(const char *str) {
    char *s = strdup(str);
    const char capSet[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    int len = strlen(s);
    for (int i = 0; i < len; i++) {
        for (int j = 0; j < strlen(capSet); j++) {
            if (s[i] == capSet[j]) {
                for (int k = i; k <= len; k++) {
                    s[k] = s[k + 1];
                }
            }
        }
    }
    printf("input:%s\n", str);
    printf("output:%s\n", s);
}