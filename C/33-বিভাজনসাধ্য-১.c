#include <stdio.h>
#include <string.h>
#include <math.h>

int main() {

//    freopen("input.txt", "rt", stdin);
//    freopen("output.txt", "wt", stdout);
    
    int t;
    long long a, b, c, strat_pariton, i;

    scanf("%d", &t);
    while (t--) {
        scanf(" %lld %lld %lld", &a, &b, &c);
        // strat_pariton = start(a, b, c);

        for (i = a; i <= b; i++) {
            if (i % c == 0) {
            strat_pariton = i;
            break;
            }
        }
        while (strat_pariton <= b) {
            printf("%lld\n", strat_pariton);
            strat_pariton += c;
        }
        
        printf("\n");
    }

    return 0;
}
// Author: Shihab Mahamud
// Date: Mon 08 Feb 2021 12:46:45 PM +06
