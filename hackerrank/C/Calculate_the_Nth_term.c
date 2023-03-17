#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int  a, b, c;
int recurse(int x) {
    if (x == 1)
        return a;
    else if (x == 2)
        return b;
    else if (x == 3)
        return c;
    return recurse(x - 1) + recurse(x - 2) + recurse(x - 3);
}

int main()
{
    int n;

    scanf("%d %d %d %d", &n, &a, &b, &c);
    int ans = recurse(n);

    printf("%d", ans);
    return 0;
}