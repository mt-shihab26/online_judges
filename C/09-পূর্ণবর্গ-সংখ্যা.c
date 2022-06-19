#include <stdio.h>
#include <string.h>
#include <math.h>

void is_integer(int num) {
    int sqr_num = sqrt(num);
    int new_num = sqr_num * sqr_num;

    if (new_num == num) {
        printf("YES\n");
    }
    else {
        printf("NO\n");
    }
}

int main() {
//    freopen("input.txt", "rt", stdin);
//    freopen("output.txt", "wt", stdout);
    int t, num;

    scanf("%d", &t);
    while (t--) {
        scanf(" %d", &num);
        is_integer(num);
    }

    return 0;
}
// Author: Shihab Mahamud
// Date: Sun 07 Feb 2021 12:01:53 PM +06
