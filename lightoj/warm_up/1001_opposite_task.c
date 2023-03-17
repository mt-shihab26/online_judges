#include <stdio.h>

int main()
{
    int t;
    int n;
    scanf("%d", &t);
    while (t--)
    {
        scanf(" %d", &n);
        printf("%d %d\n", n / 2, n / 2 + n % 2);
    }
}