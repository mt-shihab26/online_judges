#include <stdio.h>
#include <string.h>
#include <math.h>

void factorial(int num)
{
    long facto = 1;
    int i;
    if (num <= 1)
    {
        facto = 1;
    }
    else
    {
        for (i = num; i > 1; i--)
        {
            facto *= i;
        }
    }
    printf("%ld\n", facto);
}

int main()
{
    //    freopen("input.txt", "rt", stdin);
    //    freopen("output.txt", "wt", stdout);
    int t, num;
    scanf("%d", &t);
    while (t--)
    {
        scanf(" %d", &num);
        factorial(num);
    }

    return 0;
}
// Author: Shihab MahamudD
// Date: Sun 07 Feb 2021 03:12:49 PM +06