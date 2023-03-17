#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{

    //    freopen("input.txt", "rt", stdin);
    //    freopen("output.txt", "wt", stdout);

    int t, i;
    long long num;

    scanf("%d", &t);
    while (t--)
    {
        scanf(" %lld", &num);
        if (num == 0)
        {
            printf("1\n");
        }
        else if (num == 1)
        {
            printf("2 + 1\n");
        }
        else
        {
            for (i = num; i >= 2; i--)
            {
                printf("2^%d + ", i);
            }
            printf("2 + 1\n");
        }
    }

    return 0;
}
// Author: Shihab Mahamud
// Date: Wed 10 Feb 2021 11:13:52 AM +06
