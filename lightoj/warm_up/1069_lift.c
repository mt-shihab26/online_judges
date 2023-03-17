#include <stdio.h>

int main(void)
{
    int i, testcase, your_position, lift_position, temp, time;

    scanf("%d", &testcase);

    for (i = 0; i < testcase; i++)
    {
        scanf("%d%d", &your_position, &lift_position);
        temp = lift_position - your_position;
        if (temp < 0)
            temp *= (-1);
        time = (temp * 4) + (3 + 5 + 3) + (your_position * 4) + (3 + 5);
        printf("Case %d: %d\n", i + 1, time);
    }

    return 0;
}
// Author: Shihab Mahamud
// Date: Thursday, May 06, 2021 | 09:58:18 PM (+06)
// Problem Link: https://lightoj.com/problem/lift
