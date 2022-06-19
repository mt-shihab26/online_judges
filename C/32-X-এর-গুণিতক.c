#include <stdio.h>
#include <string.h>
#include <math.h>

void multiplir_x(long long x, long long n) {
    long long i;
    if (x > n) {
        printf("Invalid!\n");
    }
    else {
        for(i = x; i <= n; i += x) {
            printf("%lld\n", i);
        }
    }
}

int main() {

//    freopen("input.txt", "rt", stdin);
//    freopen("output.txt", "wt", stdout);
    
    int t;
    long long x, n;

    scanf("%d", &t);
    while (t--) {
        scanf(" %lld %lld", &x, &n);
        multiplir_x(x, n);
        printf("\n");
    }

    return 0;
}
// Author: Shihab Mahamud
// Date: Mon 08 Feb 2021 12:24:19 PM +06
