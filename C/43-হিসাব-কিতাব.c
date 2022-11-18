#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{

    //    freopen("input.txt", "rt", stdin);
    //    freopen("output.txt", "wt", stdout);

    int t, c;
    double p, q;
    long long pow_n;

    scanf("%d", &t);
    while (t--)
    {
        scanf(" %lf %lf %d", &p, &q, &c);
        pow_n = pow(p, q);
        printf("Result = %lld\n", (pow_n % c));
    }

    return 0;
}
// Author: Shihab Mahamud
// Date: Wed 10 Feb 2021 11:51:33 AM +06
