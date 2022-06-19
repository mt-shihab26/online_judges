#include <stdio.h>
// #include <string.h>
// #include <math.h>
// #include <ctype.h>
// #include <stdlib.h>

void ara_sort(int *ara, int n);

int main() {

    // freopen("input.txt", "rt", stdin);
    // freopen("output.txt", "wt", stdout);
    
    int t, n1, i, n2, j;

    scanf("%d", &t);
    while (t--) {
        scanf(" %d", &n1);
        int ara1[n1];
        for (i = 0; i < n1; i++) scanf(" %d", &ara1[i]);

        scanf(" %d", &n2);
        int ara2[n2];
        for (i = 0; i < n2; i++) scanf(" %d", &ara2[i]);

        int ara[n1+n2];
        for (i = 0, j = 0; j < n1; i++, j++) ara[i] = ara1[j];
        for (j = 0; j < n2; i++, j++) ara[i] = ara2[j];

        ara_sort(ara, n1+n2);

        for (i = 0; i < n1+n2; i++)
            if (i != 0) printf(" %d", ara[i]);
            else printf("%d", ara[i]);
        printf("\n");
    }

    return 0;
}

void ara_sort(int *ara, int n)
{
    int i, j, temp;
    for (i = 0; i < n; i++)
        for (j = i+1; j < n; j++)
            if (ara[i] > ara[j]) {
                temp = ara[i];
                ara[i] = ara[j];
                ara[j] = temp;
            }
}

// Author: Shihab Mahamud
// Date: Thursday, April 08, 2021 | 08:57:16 AM
// Problem Link: https://dimikoj.com/problems/47/array-affix-by
