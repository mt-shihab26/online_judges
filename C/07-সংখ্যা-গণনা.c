#include <stdio.h>
#include <string.h>

int counting_number(char line[])
{
    int line_len = strlen(line), i, num_count = 0;

    for (i = 0; i < line_len; i++)
    {
        if (line[i] == ' ' && line[i - 1] != ' ')
        {
            num_count++;
        }
    }
    return num_count + 1;
}

int main()
{
    // freopen("input.txt", "rt", stdin);
    // freopen("output.txt", "wt", stdout);
    int t;
    char line[10000];

    scanf("%d", &t);
    while (t--)
    {
        scanf(" %[^\n]", line);

        printf("%d\n", counting_number(line));
    }

    return 0;
}
// Author: Shihab Mahamud
// Date: Sun 07 Feb 2021 02:06:34 AM +06
