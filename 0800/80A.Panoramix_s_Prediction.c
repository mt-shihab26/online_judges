#include <stdio.h>
#include <math.h>

int is_prime(int num) {
    if (num < 2) return 1;
    if (num == 2) return 0;
    if (!(num % 2)) return 1;
    int root = sqrt(num), i;
    for (i=3; i<=root; i+=2)
        if (!(num % i)) return 1;
    return 0;
}

int main(void) {
    int n, m, next_prime, i;
    scanf("%d%d", &n, &m);

    if (is_prime(m)) {
        printf("NO\n");
        return 0;
    }

    i = n + 1;
    while (is_prime(i)) i++;

    printf("%s\n", i==m ? "YES": "NO");
    
    return 0;
}
// Author: shihab4t
// Date: Monday, May 24, 2021 | 01:05:48 AM (+06)
