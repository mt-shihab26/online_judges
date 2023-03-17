#include <stdio.h>

void divisor(int num);

int main()
{

    // freopen("input.txt", "rt", stdin);
    // freopen("output.txt", "wt", stdout);

    int t, num, i;

    scanf("%d", &t);

    for (i = 1; i <= t; i++)
    {
        scanf("%d", &num);
        printf("Case %d:", i);
        divisor(num);
    }
    return 0;
}

void divisor(int num)
{
    int i;
    for (i = 1; i <= num; i++)
        if (num % i == 0)
            printf(" %d", i);
    printf("\n");
}