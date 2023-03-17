#include <stdio.h>
#include <string.h>

int main()
{
    // freopen("input.txt", "rt", stdin);
    // freopen("output.txt", "wt", stdout);

    int t, first, last;
    char number[7];

    scanf("%d", &t);
    while (t--)
    {
        scanf(" %s", number);
        first = number[0] - '0';
        last = number[4] - '0';
        printf("Sum = %d\n", first + last);
    }

    return 0;
}

// Date: Wed Jan 27 11:15:41 UTC 2021
