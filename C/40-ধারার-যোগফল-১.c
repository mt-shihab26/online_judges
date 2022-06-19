#include <stdio.h>
#include <string.h>
#include <math.h>

int main() {

//    freopen("input.txt", "rt", stdin);
//    freopen("output.txt", "wt", stdout);
    
    int t, x, k, result, i;

    scanf("%d", &t);
    while (t--) {
        scanf(" %d %d", &x, &k);
        result = 1;
        for (i = 1; i <= k; i++) {
            result += pow(x, i);
        }
        printf("Result = %d\n", result);
    }

    return 0;
}
// Author: Shihab Mahamud
// Date: Tue 09 Feb 2021 03:10:08 PM +06
