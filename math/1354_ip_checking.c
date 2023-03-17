#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int convert_bin_to_dec(int n)
{
    int dec = 0, i = 0, rem;
    while (n != 0)
    {
        rem = n % 10;
        n /= 10;
        dec += rem * pow(2, i);
        ++i;
    }
    return dec;
}

int main(void)
{
    int t, i, k, j, m;

    scanf("%d", &t);

    for (i = 0; i < t; i++)
    {
        int line_1[4], line_2[4], is = 1;
        char line_1s[18], line_2s[50];

        scanf("%s %s", line_1s, line_2s);

        sscanf(line_1s, "%d.%d.%d.%d", &line_1[0], &line_1[1], &line_1[2], &line_1[3]);
        sscanf(line_2s, "%d.%d.%d.%d", &line_2[0], &line_2[1], &line_2[2], &line_2[3]);

        printf("Case %d: ", i + 1);
        for (j = 0; j < 4; j++)
        {
            if (line_1[j] != convert_bin_to_dec(line_2[j]))
            {
                printf("No\n");
                is = 0;
                break;
            }
        }
        if (is)
        {
            printf("Yes\n");
        }

        // printf("%d %d %d %d\n", line_1[0], line_1[1], line_1[2], line_1[3]);
    }

    return 0;
}
// Author: Shihab Mahamud
// Date: Sunday, May 02, 2021 | 01:23:47 PM
// Problem Link: https://lightoj.com/problem/ip-checking
