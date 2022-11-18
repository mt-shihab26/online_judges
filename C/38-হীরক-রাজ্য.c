#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{

    //    freopen("input.txt", "rt", stdin);
    //    freopen("output.txt", "wt", stdout);

    int t, i, j, n, m;

    scanf("%d", &t);
    while (t--)
    {
        scanf(" %d %d", &n, &m);
        for (i = 1; i <= n; i++)
        {
            j = i;
            while (j--)
            {
                if (j == 0)
                {
                    printf("%d", m);
                }
                else
                {
                    printf("%d ", m);
                }
            }
            printf("\n");
        }
        for (i = n - 1; i > 0; i--)
        {
            j = i;
            while (j--)
            {
                if (j == 0)
                {
                    printf("%d", m);
                }
                else
                {
                    printf("%d ", m);
                }
            }
            printf("\n");
        }
        printf("\n");
    }

    return 0;
}
// Author: Shihab Mahamud
// Date: Tue 09 Feb 2021 01:48:03 PM +06
