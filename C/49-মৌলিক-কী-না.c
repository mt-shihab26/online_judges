#include <stdio.h>
#include <string.h>
#include <math.h>

int is_prime(long long n) {
    int i, root;

    if (n <= 1) {
        return 0;
    }
    if (n == 2) {
        return 1;
    }
    if (n % 2 == 0) {
        return 0;
    }
    root = sqrt(n);
    for (i = 3; i <= root; i += 2) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main() {

//    freopen("input.txt", "rt", stdin);
//    freopen("output.txt", "wt", stdout);
    
    int t;
    long long n;

    scanf("%d", &t);
    while (t--) {
        scanf(" %lld", &n);
        if (is_prime(n) == 1) {
            printf("%lld is a prime\n", n);
        }
        else {
            printf("%lld is not a prime\n", n);
        }
    }

    return 0;
}
// Author: Shihab Mahamud