#include <stdio.h>

int main(void)
{
    char password[3];
    int num, x, y, i;
    scanf("%s%d", password, &num);
    char temp[3];

    for (i = 0; i < num; i++)
    {
        scanf("%s", temp);

        if (password[0] == temp[0] && temp[1] == password[1]) {
            x++;
            y++;
        }
        else {
            if (password[0] == temp[1]) x++;
            if (password[1] == temp[0]) y++;
        }
    }

    if (x != 0 && y != 0) printf("YES\n");
    else printf("NO\n");

    return 0;
}
// Author: Shihab Mahamud
// Date: Saturday, May 01, 2021 | 11:22:15 AM
// Problem Link: https://codeforces.com/problemset/problem/868/A
