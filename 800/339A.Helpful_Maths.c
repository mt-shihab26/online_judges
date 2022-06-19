#include <stdio.h>
#include <string.h>

int main(void) 
{
    char s[102];
    int sl, len, i, j, temp;
    scanf("%s", s);
    sl = strlen(s);
    len = (int)((sl/2)+1);
    int ara[len];
    for (i = 0, j = 0; i < sl; i += 2, j++)
        ara[j] = s[i] - '0';

    for (i = 0; i < len; i++)
        for (j = i; j < len; j++)
            if (ara[i] > ara[j]) {
                temp = ara[i];
                ara[i] = ara[j];
                ara[j] = temp;
            }

    for (i = 0; i < len; i++) {
        printf("%d", ara[i]);
        if (i != len-1) printf("+");
    }
    printf("\n");
    return 0;
}
// Author: Shihab Mahamud
// Date: Monday, May 03, 2021 | 04:10:12 PM
// Problem Link: https://codeforces.com/problemset/problem/339/A
