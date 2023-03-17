#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
    // freopen("input.txt", "rt", stdin);
    // freopen("output.txt", "wt", stdout);
    int t, str_len, i, j, k, m, word_len;
    char str[1002], word[500][100];

    scanf("%d", &t);
    while (t--)
    {
        scanf(" %[^\n]", str);
        str_len = strlen(str);
        for (i = 0, j = 0, k = 0; i < str_len; i++)
        {
            if (str[i] == ' ')
            {
                j++;
                k = 0;
            }
            else
            {
                word[j][k] = str[i];
                k++;
            }
        }
        for (i = 0, m = 0; i < j + 1; i++)
        {
            word_len = strlen(word[i]);
            for (k = word_len - 1; k >= 0; k--)
            {
                str[m] = word[i][k];
                m++;
            }
            if (i != j)
            {
                str[m] = ' ';
                m++;
            }
        }
        printf("%s\n", str);
    }
    return 0;
}
// Author: Shihab Mahamud
// Date: Mon 08 Feb 2021 02:45:19 AM +06
