#include <stdio.h>
#include <string.h>
#include <math.h>

void divisors_sum(int num) {
    int i, divi_sum = 0;
    for (i = 1; i < num; i++) {
        if (num % i == 0) {
            divi_sum += i;
        }
    }
    if (num == divi_sum) {
        printf("YES, %d is a perfect number!\n", num);
    }
    else {
        printf("NO, %d is not a perfect number!\n", num);
    }
}

int main() {
//    freopen("input.txt", "rt", stdin);
//    freopen("output.txt", "wt", stdout);
    int t, num;

    scanf("%d", &t);
    while (t--)
    {
        scanf(" %d", &num);
        divisors_sum(num);
    }
    
    return 0;
}
// Author: Shihab Mahamud
// Date: Mon 08 Feb 2021 03:36:50 AM +06
