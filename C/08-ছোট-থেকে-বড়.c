#include <stdio.h>
#include <string.h>

int main() {
//    freopen("input.txt", "rt", stdin);
//    freopen("output.txt", "wt", stdout);
    int t, a, b, c, i, temp;
    scanf("%d", &t);
    for(i = 1; i <= t; i++) {
        scanf(" %d %d %d", &a, &b, &c); 
        if (a > b) {
            temp = a;
            a = b;
            b = temp;
        }
        if (a > c) {
            temp = a;
            a = c;
            c = temp;
        }
        if (b > c) {
            temp = c;
            c = b;
            b = temp;
        }
        printf("Case %d: %d %d %d\n", i, a, b, c);
    }
    return 0;
}
// Author: Shihab Mahamud
// Date: Sun 07 Feb 2021 02:30:13 AM +06
