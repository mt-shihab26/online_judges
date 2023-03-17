#include <stdio.h>
#include <math.h>

int main(void) 
{ 
    int t, i;
    long warriors;

    scanf("%d", &t);
    while (t--){
        scanf("%ld", &warriors);
        
        printf("%ld\n", (long)((sqrt( 2.0 * warriors + 0.25 ) + 0.5) - 1));
    }

    return 0;
}