#include <stdio.h>

int main(void) {
    int test, i, start, end, j, sum;
    scanf("%d", &test);

    for (i=1; i<=test; i++) {
        sum = 0;
        scanf("%d%d", &start, &end);
        for (j=start; j<=end; j++) {
            if (j % 2) sum += j;
        }
        printf("Case %d: %d\n", i, sum);
    }

    return 0;
}
// Author: shihab4t
// Date: Monday, May 24, 2021 | 02:29:16 AM (+06)