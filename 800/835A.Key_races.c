#include <stdio.h>

int main(void) 
{
    int s, v1, v2, t1, t2, first, second;

    scanf("%d%d%d%d%d", &s, &v1, &v2, &t1, &t2);

    first = (t1*2) + (s*v1);
    second = (t2*2) + (s*v2);

    if (first < second)
        printf("First\n");
    else if (second < first)
        printf("Second\n");
    else 
        printf("Friendship\n");

    return 0;
}
// Author: Shihab Mahamud
// Date: Friday, April 30, 2021 | 03:03:52 PM
// Problem Link: https://codeforces.com/problemset/problem/835/A
