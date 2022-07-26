#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

int main(void) {
    
    int x;
    scanf("%d", &x);
    int r = 0;

    while (x) {
        r += x % 2;
        x /= 2;
    }
    
    printf("%d\n", r);
    
    return 0;
}
// Author: Shihab Mahamud
// Date: Wednesday, May 12, 2021 | 11:06:04 PM (+06)
// Problem Link: 
