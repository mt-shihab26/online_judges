#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

int slove(int n);

int main(void) {
    
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    int t, n;
    scanf("%d", &t);
    while(t--) {
        scanf("%d", &n);
        printf("%d\n", slove(n));
    }
    
    return 0;
}

int slove(int n) {
    int pile1 = pow(2, n), i, pile2 = 0;
    for (i = 1; i < n/2; i++) {
        pile1 += pow(2, i);
    }
    for (i = n/2; i < n; i++) {
        pile2 += pow(2, i);
    }
    return pile1-pile2;
}

// Author: Shihab Mahamud
// Date: Wednesday, May 12, 2021 | 10:38:56 PM (+06)
// Problem Link: 
