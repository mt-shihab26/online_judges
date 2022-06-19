#include <stdio.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

char is_prime(int num);

int main() {

    // freopen("input.txt", "rt", stdin);
    // freopen("output.txt", "wt", stdout);
    
    int t, i, start, end, count, j;

    scanf("%d", &t);

    while (t--) {
        scanf(" %d %d", &start, &end);
        count = 0;
        for (i = start; i <= end; i++) 
            if (is_prime(i)) count++;
        printf("%d\n", count);
    }

    return 0;
}

char is_prime(int num)
{
    if (num < 2) return 0;
    if (num == 2) return 1;
    if (num % 2 == 0) return 0;
    int i, root = sqrt(num);
    for (i = 3; i <= root; i += 2)
        if (num % i == 0) return 0;
    return 1;
} 

// Author: Shihab Mahamud
// Date: Wednesday, April 07, 2021 | 21:48:03
// Problem Link: https://dimikoj.com/problems/22/prime-number-by
