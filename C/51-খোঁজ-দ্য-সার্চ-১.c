#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{

    //    freopen("input.txt", "rt", stdin);
    //    freopen("output.txt", "wt", stdout);

    int t, i, len, sub_len, j, k;
    char main_str[130], sub_str[130];

    scanf("%d", &t);
    while (t--)
    {
        scanf(" %s %s", main_str, sub_str);
        len = strlen(main_str);
        sub_len = strlen(sub_str);
        char temp[130];
        if (strcmp(main_str, sub_str) == 0)
        {
            printf("%d\n", 0);
        }
        else
        {
            for (i = 0; i < len - sub_len; i++)
            {
                for (j = 0, k = i; j < sub_len; j++, k++)
                {
                    temp[j] = main_str[k];
                }
                if (strcmp(temp, sub_str) == 0)
                {
                    printf("%d\n", i);
                    break;
                }
            }
        }
    }

    return 0;
}
// Author: Shihab Mahamud
// Date: Wed 10 Feb 2021 06:06:03 PM +06
