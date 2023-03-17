#include <stdio.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

int count_vowels(char *str);

int main()
{
    // freopen("input.txt", "rt", stdin);
    // freopen("output.txt", "wt", stdout);

    int t;
    char str[1002];

    scanf("%d", &t);
    while (t--)
    {
        scanf(" %[^\n]", str);
        printf("Number of vowels = %d\n", count_vowels(str));
    }

    return 0;
}

int count_vowels(char *str)
{
    int count = 0, i, len = strlen(str);
    for (i = 0; i < len; i++)
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] += 32;
        switch (str[i])
        {
        case 'a':
            count++;
            break;
        case 'e':
            count++;
            break;
        case 'i':
            count++;
            break;
        case 'o':
            count++;
            break;
        case 'u':
            count++;
            break;
        }
    }
    return count;
}

// Author: Shihab Mahamud
// Date: Saturday, April 03, 2021 | 06:38:52
