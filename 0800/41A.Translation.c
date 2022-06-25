#include <stdio.h>
#include <string.h>
// #include <math.h>
// #include <ctype.h>
// #include <stdlib.h>

int main(void) 
{

    // freopen("input.txt", "rt", stdin);
    // freopen("output.txt", "wt", stdout);
    
    char berland_word[102], birland[102];
    int len, i, j;

    scanf("%s%s", berland_word, birland);

    len = strlen(berland_word);
    
    for (i = 0, j = len-1; i < len; i++, j--) {
        if (berland_word[i] != birland[j]) {
            printf("NO\n");
            return 0;
        }
    }

    printf("YES\n");    

    return 0;
}
// Author: Shihab Mahamud
// Date: Wednesday, April 28, 2021 | 10:08:44 AM
// Problem Link: https://codeforces.com/problemset/problem/41/A
