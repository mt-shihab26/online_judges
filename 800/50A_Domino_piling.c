#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

int main(void) 
{
    int m, n;
    scanf("%d%d", &m, &n);
    int area_bord = m*n;
    printf("%d\n", (int)area_bord/2);
    
    return 0;
}
