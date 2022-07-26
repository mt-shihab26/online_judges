#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

int main(void) {
    int stops, exited, entered, final = 0, total = 0;
    scanf("%d", &stops);
    while (stops--) {
        scanf("%d%d", &exited, &entered);
        total = total - exited;
        total = total + entered;
        if (total>final) final = total; 
    }
    printf("%d\n", final);
    return 0;
}
// Author: Shihab Mahamud
// Date: Saturday, May 15, 2021 | 11:05:50 AM (+06)
