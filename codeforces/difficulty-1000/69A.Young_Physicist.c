#include <stdio.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

int main()
{
    int t, x, y, z;
    int x_add = 0, y_add = 0, z_add = 0;

    scanf("%d", &t);
    while (t--)
    {
        scanf("%d %d %d", &x, &y, &z);
        x_add += x;
        y_add += y;
        z_add += z;
    }

    if ((x_add == 0) && (y_add == 0) && (z_add == 0))
        printf("YES\n");
    else
        printf("NO\n");

    return 0;
}
// Author: Shihab Mahamud
// Date: বুধবার, মার্চ 10, 2021 | 00:49:23
