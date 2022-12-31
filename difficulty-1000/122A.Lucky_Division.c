#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
#include <stdbool.h>

int main(void)
{
    int lucky_numbers[11] = {4, 7, 47, 74, 444, 447, 474, 477, 744, 747, 777};
    int num;
    scanf("%d", &num);

    for (int i = 0; i < 11; i++)
    {
        if (num % lucky_numbers[i] == 0)
        {
            printf("YES\n");
            return 0;
        }
    }
    printf("NO\n");

    return 0;
}
// Author: shihab4t
// Date: Sunday, May 23, 2021 | 12:33:53 AM (+06)
