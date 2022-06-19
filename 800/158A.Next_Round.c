#include <stdio.h>

int main(void) 
{    
    int n, k, i, count = 0;
    scanf("%d%d", &n, &k);
    int score[n];
    for (i = 0; i < n; i++)
        scanf("%d", &score[i]);

    for (i = 0; i < n; i++)
        if (score[i] >= score[k-1] && score[i])
            count++;

    printf("%d\n", count);

    return 0;
}
// Author: Shihab Mahamud
// Date: Monday, May 03, 2021 | 04:43:14 PM (+06)
// Problem Link: https://codeforces.com/problemset/problem/158/A
