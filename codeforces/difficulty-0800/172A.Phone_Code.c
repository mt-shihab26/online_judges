#include <stdio.h>
#include <string.h>
// #include <math.h>
// #include <ctype.h>
// #include <stdlib.h>

int main(void) 
{

    // freopen("input.txt", "rt", stdin);
    // freopen("output.txt", "wt", stdout);
    
    int t, i, j;

    scanf("%d", &t);

    char num[t][22];

    for (i = 0; i < t; i++)
        scanf("%s", num[i]);

    int len = strlen(num[0]), count = 0, temp;

    for (i = 0; i < len; i++) {
        temp = 0;
        for (j = 0; j < t; j++) {
            if (num[j][i] == num[0][i])
                temp++;
        }
        if (temp == t) 
            count++;
        else 
            break;
    }
    
    printf("%d\n", count);

    return 0;
}
// Author: Shihab Mahamud
// Date: Friday, April 30, 2021 | 06:13:22 AM
// Problem Link: https://codeforces.com/problemset/problem/172/A
