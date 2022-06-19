#include <stdio.h>

int main(void) 
{
    char s[1002];
    scanf("%s", s);
    if (s[0] >= 'a' && s[0] <= 'z')
        s[0] -= 32;
    printf("%s\n", s);

    return 0;
}
// Author: Shihab Mahamud
// Date: Monday, May 03, 2021 | 04:32:25 PM (+06)
// Problem Link: https://codeforces.com/problemset/problem/281/A
