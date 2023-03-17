#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n, sum = 0, tmp;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &tmp);
        sum += tmp; 
    }
    
    printf("%d\n", sum);
    
    return 0;
}