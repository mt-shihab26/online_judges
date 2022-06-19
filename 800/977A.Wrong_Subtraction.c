#include <stdio.h>
#include <string.h>

int main(void) {
    int n, i, final, k;
    char nstr[100];

    scanf("%d %d", &n, &k);

    for (i = 1; i <= k; i++) {
        sprintf(nstr, "%d", n);
        if(((nstr[strlen(nstr)-1])-'0') == 0)
            n = n / 10; 
        else
            n = n - 1;

        if (n <= 0) break;
        final = n;
    }
    printf("%d", final);

    return 0;
}