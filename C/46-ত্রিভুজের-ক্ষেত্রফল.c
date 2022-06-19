#include <stdio.h>
#include <string.h>
#include <math.h>

int main() {

//    freopen("input.txt", "rt", stdin);
//    freopen("output.txt", "wt", stdout);
    
    int t;
    double a, b, c, s, result;

    scanf("%d", &t);
    while (t--) {
        scanf(" %lf %lf %lf", &a, &b, &c);
        s = (a + b + c) / 2;
        result = sqrt(s * (s - a) * (s - b) * (s - c));
        printf("Area = %.3lf\n", result);
    }

    return 0;
}
// Author: Shihab Mahamud
// Date: Wed 10 Feb 2021 12:09:45 PM +06
