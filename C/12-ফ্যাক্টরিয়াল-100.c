#include <stdio.h>
#include <string.h>
#include <math.h>

void factorial_100(int n);

int main() {

    // freopen("input.txt", "rt", stdin);
    // freopen("output.txt", "wt", stdout);
    int t, num;
    scanf("%d", &t);
    while (t--) {
        scanf("%d", &num);
        factorial_100(num);
    }

    return 0;
}

void factorial_100(int n)
{
    long pow_5 = 5, counter = 0;
    while (pow_5 <= n) {
        counter += n / pow_5;
        pow_5 *= 5;
    }

    printf("%ld\n", counter);
}

// Author: Shihab Mahamud
// Date: Thursday, April 01, 2021 | 22:51:50
