#include <stdio.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
#include <stdlib.h>

int main() {

    // freopen("input.txt", "rt", stdin);
    // freopen("output.txt", "wt", stdout);
    
    int t, i, j;
    scanf("%d", &t);
    char str[100][102], temp[102];

    for (i = 0; i < t; i++) scanf("%s", str[i]);

    for (i = 0; i < t; i++) {
        for (j = i+1; j < t; j++)
            if (strcmp(str[i], str[j]) > 0) {
                strcpy(temp, str[i]);
                strcpy(str[i], str[j]);
                strcpy(str[j], temp);
            }
        printf("%s\n", str[i]);
    }

    return 0;
}
// Author: Shihab Mahamud
// Date: Thursday, April 08, 2021 | 08:08:06 AM
// Problem Link: https://dimikoj.com/problems/37/word-sorting-by
