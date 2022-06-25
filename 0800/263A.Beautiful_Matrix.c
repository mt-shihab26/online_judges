#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

int main(void) {
    
    int var, i, j;

    for (i=0; i<5; i++) {
        for (j=0; j<5; j++) {
            scanf("%d", &var);
            if (var == 1) break;
        }
        if (var == 1) break;
    }
    printf("%d\n", abs(i-2)+abs(j-2));


    return 0;
}
// Author: Shihab Mahamud
