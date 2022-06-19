#include <stdio.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

int main() {

    // freopen("input.txt", "rt", stdin);
    // freopen("output.txt", "wt", stdout);
    
    int t, i;
    int x1, x2, y1, y2;
    int cow_n, x, y, j;

    scanf("%d", &t);

    for (i=1; i<=t; i++) {
        scanf(" %d %d %d %d", &x1, &y1, &x2, &y2);
        scanf(" %d", &cow_n);
        printf("Case %d:\n", i);
        for (j = 0; j < cow_n; j++) {
            scanf(" %d %d", &x, &y);
            if ((x1 < x && x < x2) && (y1 < y && y < y2))
                printf("Yes\n");
            else
                printf("No\n");
        }
        
    }

    return 0;
}
// Author: Shihab Mahamud
// Date: সোমবার, মার্চ 15, 2021 | 08:44:39
