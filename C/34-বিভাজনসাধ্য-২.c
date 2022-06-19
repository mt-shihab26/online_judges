#include <stdio.h>
#include <string.h>
#include <math.h>

int main() {

//    freopen("input.txt", "rt", stdin);
//    freopen("output.txt", "wt", stdout);

    int t, i; 
    long long a, b, c;
    scanf("%d", &t);
    while (t--) {
        scanf(" %lld %lld %lld", &a, &b, &c);
        for (i = 1; i <= c; i++) {
            if (i % a == 0 && i % b == 0) {
                printf("%d\n", i);
            }
        }
        if (t != 0) {
            printf("\n");
        }
    }
    
    return 0;
}
// Author: Shihab Mahamud
// Date: Mon 08 Feb 2021 07:05:34 PM +06
