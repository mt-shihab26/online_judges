#include <stdio.h>
// #include <string.h>
#include <math.h>
// #include <ctype.h>
// #include <stdlib.h>

int main(void) {

    // freopen("input.txt", "rt", stdin);
    // freopen("output.txt", "wt", stdout);
    
    int t;
    float a, b, c, s, area;
    scanf("%d", &t);
    while (t--) {
        scanf("%f %f %f", &a, &b, &c);
        if (a+b<c || b+c<a || a+c<b) {
            printf("Oh, No!\n");
        }
        else {
            s = (a+b+c) / 2.0;
            area = sqrt(s*(s-a)*(s-b)*(s-c));
            printf("%.2f\n", area);
        }
    }

    return 0;
}
// Author: Shihab Mahamud
// Date: Friday, April 09, 2021 | 08:30:44 AM
// Problem Link: https://dimikoj.com/problems/72/iscpc-2018-preliminary-b
