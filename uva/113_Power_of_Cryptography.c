#include <stdio.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

int main() {

    // freopen("input.txt", "rt", stdin);
    // freopen("output.txt", "wt", stdout);
    
    double n, p;

    while ((scanf("%lf\n%lf", &n, &p)) != EOF) {
        printf("%.0lf\n", pow(p, 1.0/n));
    }

    return 0;
}
// Author: Shihab Mahamud
// Date: শুক্রবার, ফেব্রুয়ারী 19, 2021 | 13:49:54
