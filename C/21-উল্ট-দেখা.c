#include <stdio.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

int main()
{

    // freopen("input.txt", "rt", stdin);
    // freopen("output.txt", "wt", stdout);

    int t, i;
    char str[1002];

    scanf("%d", &t);

    while (t--)
    {
        scanf(" %[^\n]", str);
        for (i = strlen(str) - 1; i >= 0; i--)
        {
            printf("%c", str[i]);
        }
        printf("\n");
    }

    return 0;
}
// Author: Shihab Mahamud
// Date: Wednesday, April 07, 2021 | 21:38:28
// Problem Link: https://dimikoj.com/problems/21/reverse-show-by
