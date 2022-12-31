#include <stdio.h>
#include <string.h>

int main(void)
{
    char str[102];
    scanf("%s", str);
    char hello[] = "hello", temp;

    int i = 0;
    for (int j = 0; j < strlen(str); j++)
    {
        if (str[j] == hello[i])
        {
            i++;
        }
    }

    printf("%s\n", i == 5 ? "YES" : "NO");

    return 0;
}
// Author: shihab4t
// Date: Saturday, May 22, 2021 | 11:45:22 PM (+06)
