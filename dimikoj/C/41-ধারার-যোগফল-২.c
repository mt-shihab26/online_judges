#include <stdio.h>
#include <string.h>
#include <math.h>

double factorial(double n)
{
    if (n <= 1)
    {
        return 1;
    }
    int i;
    double sum = 1;
    for (i = 2; i <= n; i++)
    {
        sum *= i;
    }
    return sum;
}

int main()
{

    //    freopen("input.txt", "rt", stdin);
    //    freopen("output.txt", "wt", stdout);

    int t, i;
    double num, sum;

    scanf("%d", &t);
    while (t--)
    {
        scanf(" %lf", &num);
        sum = 0;
        for (i = 1; i <= num; i++)
        {
            sum += (i / factorial(i));
        }
        printf("%.4lf\n", sum);
    }

    return 0;
}
// Author: Shihab Mahamud
// Date: Wed 10 Feb 2021 11:00:15 AM +06
