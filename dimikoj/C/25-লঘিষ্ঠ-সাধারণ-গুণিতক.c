#include <stdio.h>
// #include <string.h>
// #include <math.h>
// #include <ctype.h>
// #include <stdlib.h>

int main(void)
{

    // freopen("input.txt", "rt", stdin);
    // freopen("output.txt", "wt", stdout);

    int t, a, b, max, temp;
    scanf("%d", &t);

    while (t--)
    {
        scanf(" %d %d", &a, &b);
        if (a < b)
            max = b;
        else
            max = a;

        while (1)
        {
            if (max % a == 0 && max % b == 0)
            {
                printf("LCM = %d\n", max);
                break;
            }
            max++;
        }
    }

    return 0;
}
// Author: Shihab Mahamud
// Date: Monday, April 12, 2021 | 05:13:41 AM
// Problem Link: https://dimikoj.com/problems/25/longer-common-multiples-by
