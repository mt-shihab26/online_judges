#include <stdio.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

int main()
{

    // freopen("input.txt", "rt", stdin);
    // freopen("output.txt", "wt", stdout);

    int t, count;
    double food;

    scanf("%d", &t);
    while (t--)
    {
        count = 0;
        scanf("%lf", &food);
        while (food >= 1.0)
        {
            food = food / 2;
            count++;
        }
        printf("%d days\n", count);
    }

    return 0;
}
// Author: Shihab Mahamud
// Date: Thursday, April 08, 2021 | 01:09:42
// Problem Link: https://dimikoj.com/problems/26/alien-guppy-by
