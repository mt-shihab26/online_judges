#include <stdio.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

double get_shaded_region(double r);

int main()
{

    // freopen("input.txt", "rt", stdin);
    // freopen("output.txt", "wt", stdout);
    double r;
    int t, i;

    scanf("%d", &t);

    for (i = 1; i <= t; i++)
    {
        scanf(" %lf", &r);
        printf("Case %d: %.2lf\n", i, get_shaded_region(r));
    }

    return 0;
}

double get_shaded_region(double r)
{
    double area_of_circle = M_PI * (r * r);
    double a = r * 2;
    double area_of_squate = a * a;
    return (area_of_squate - area_of_circle);
}

// Author: Shihab Mahamud
// Date: সোমবার, মার্চ 15, 2021 | 07:04:33
