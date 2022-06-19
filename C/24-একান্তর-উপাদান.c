#include <stdio.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

int main() {

    // freopen("input.txt", "rt", stdin);
    // freopen("output.txt", "wt", stdout);
    
    int t, i, n;

    scanf("%d", &t);
    while (t--) {
        scanf(" %d", &n);
        int ara[10000];
        for (i = 0; i < n; i++) scanf("%d", &ara[i]);
        for (i = 0; i < n; i += 2) {
            printf("%d", ara[i]);
            if (i < n-2) printf(" ");
        }
        printf("\n");
    }

    return 0;
}
// Author: Shihab Mahamud
// Date: Thursday, April 08, 2021 | 00:07:18
// Problem Link: https://dimikoj.com/problems/24/alternate-elements-by
