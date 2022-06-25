#include <stdio.h>
#include <string.h>
// #include <math.h>
// #include <ctype.h>
// #include <stdlib.h>
 
int main(void) 
{
 
    // freopen("input.txt", "rt", stdin);
    // freopen("output.txt", "wt", stdout);
    
    char num_str[20]; int i;
    scanf("%s", num_str);

    int ans = 0;
    for (i = 0; num_str[i]; i++) {
        if (num_str[i] == '4' || num_str[i] == '7'){
            ans++;
        }
    }
    if (ans == 4 || ans == 7) {
        printf("YES\n");
    }
    else printf("NO\n");
 
    return 0;
}
// Author: Shihab Mahamud
// Date: Wednesday, April 28, 2021 | 09:41:45 AM
// Problem Link: https://codeforces.com/problemset/problem/110/A