#include <stdio.h>
#include <string.h>
// #include <math.h>
// #include <ctype.h>
// #include <stdlib.h>

int main()
{

    // freopen("input.txt", "rt", stdin);
    // freopen("output.txt", "wt", stdout);

    int t;

    scanf("%d", &t);
    while (t--)
    {
        char main_str[1000], sub_str[1000];
        scanf(" %s %s", main_str, sub_str);

        int main_len = strlen(main_str);
        int sub_len = strlen(sub_str);

        int count = 0;
        int j = 0;

        while (j <= main_len - sub_len)
        {
            if (strncmp(main_str + j, sub_str, sub_len) == 0)
                count++;
            j++;
        }
        printf("%d\n", count);
    }

    return 0;
}
// Author: Shihab Mahamud
// Date: Thursday, April 08, 2021 | 09:17:08 AM
// Problem Link: https://dimikoj.com/problems/52/search-2-by
