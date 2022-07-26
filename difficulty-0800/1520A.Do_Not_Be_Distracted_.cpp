#include <stdio.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
#include <stdlib.h>

int main(void) 
{
    int t, i;

    scanf("%d", &t);
    while (t--) {
        int n, j, k;
        scanf("%d", &n);
        char task[n+1];
        int task_c[n];
        scanf("%s", task);
        char nuw[n+1];
        for (i = 0, j= 0; i <= n; i++) {
            if (task[i] != task[i-1]) {
                nuw[j] = task[i];
                j++;
            }
        }
        int is = 0;
        for (i = 0; i < j; i++) {
            // printf("%c ", nuw[i]);
            for (k = i+1; k < j; k++) {
                if (nuw[i] == nuw[k]) {
                    is = 1;
                }
            }
        }
        if (is != 0) {
            printf("NO\n");
        }
        else printf("YES\n");
    }


    return 0;
}