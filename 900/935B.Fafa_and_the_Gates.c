#include <stdio.h>
 
int main(void) 
{
    int x = 0, y = 0, i, n, coin;
    scanf("%d", &n);
    char command[n+1];
    scanf("%s", command);
 
    coin = 0;
    for (i = 0; i < n; i++) {
        if (command[i] == 'U')
            y++;
        else if (command[i] == 'R')
            x++;
        if (x == y && command[i] == command[i+1]) {
            coin++;
        }
    }
    printf("%d\n", coin);
 
    return 0;
}
// Author: Shihab Mahamud
// Date: Friday, April 30, 2021 | 03:29:52 PM
// Problem Link: https://codeforces.com/problemset/problem/935/B