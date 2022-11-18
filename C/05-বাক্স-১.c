#include <stdio.h>

int main()
{
    //    freopen("input.txt", "rt", stdin);
    //    freopen("output.txt", "wt", stdout);

    int t, radis, i, j;

    scanf("%d", &t);
    while (t--)
    {
        scanf(" %d", &radis);
        for (i = 1; i <= radis; i++)
        {
            for (j = 1; j <= radis; j++)
            {
                printf("*");
            }
            printf("\n");
        }
        if (t != 0)
        {
            printf("\n");
        }
    }

    return 0;
}

// OJ: dimikoj.com_05
// Date: Sat Jan 23 21:25:13 UTC 2021
