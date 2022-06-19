#include <stdio.h>
#include <string.h>
#include <math.h>

int main() {

//    freopen("input.txt", "rt", stdin);
//    freopen("output.txt", "wt", stdout);

    int t, num, i;

    scanf("%d", &t);
    for(i = 1; i <= t; i++) {
        scanf(" %d", &num);
        if (num >= 6) {
            printf("%d\n", 6);
        }
        if (num >= 28) {
            printf("%d\n", 28);
        }
        if (num >= 496) {
            printf("%d\n", 496);
        }
        if (num >= 8128) {
            printf("%d\n", 8128);
        }
        if (num >= 33550336) {
            printf("%d\n", 33550336);
        }

        if (i != t) {
            printf("\n");
        }
    }

    return 0;
}
// Author: Shihab Mahamud
// Date: Mon 08 Feb 2021 04:05:12 AM +06
