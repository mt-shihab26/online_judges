#include <stdio.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
#include <stdlib.h>

void sorting_ara(int *ara, int n);

int main()
{

    // freopen("input.txt", "rt", stdin);
    // freopen("output.txt", "wt", stdout);

    int t, i;

    scanf("%d", &t);
    int ara[t], main_ara[t];
    for (i = 0; i < t; i++)
    {
        scanf(" %d", &ara[i]);
        main_ara[i] = ara[i];
    }
    sorting_ara(ara, t);

    for (i = 0; i < t; i++)
        if (main_ara[i] != ara[i])
        {
            printf("NO\n");
            return 0;
        }
    printf("YES\n");

    return 0;
}

void sorting_ara(int *ara, int n)
{
    int i, j, temp;
    for (i = 0; i < n; i++)
        for (j = i + 1; j < n; j++)
            if (ara[i] > ara[j])
            {
                temp = ara[i];
                ara[i] = ara[j];
                ara[j] = temp;
            }
}

// Author: Shihab Mahamud
// Date: Thursday, April 08, 2021 | 06:50:04
// Problem Link: https://dimikoj.com/problems/28/random-array-by
