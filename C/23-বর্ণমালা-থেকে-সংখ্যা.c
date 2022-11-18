#include <stdio.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

int main()
{

    // freopen("input.txt", "rt", stdin);
    // freopen("output.txt", "wt", stdout);

    int t;
    char str[102], temp = 'A' - 1, i;

    scanf("%d", &t);
    while (t--)
    {
        scanf(" %[^\n]", str);
        for (i = 0; i < strlen(str); i++)
            printf("%d", str[i] - temp);
        printf("\n");
    }

    return 0;
}
// Author: Shihab Mahamud
// Date: Wednesday, April 07, 2021 | 23:54:55
// Problem Link: https://dimikoj.com/problems/23/alphabet-to-number-by
