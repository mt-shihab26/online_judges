#include <bits/stdc++.h>

using namespace std;

int main() {
    int t, n, k, a[100000], i, j, v, c, e, x;

    scanf("%d", &t);

    while (t--) {
        c = 0;
        scanf("%d %d", &n, &k);
        for (i = 0; i < n; i++) {
            scanf("%d", a + i);
        }

        // 1 0 0 0
        for (int i = 0; i < n; i++) {
            v = 0;
            x = 0;
            for (j = i; j < min(i + k, n); j++) {
                x++;
                if (a[j] == 1) {
                    v = 1;
                    break;
                }
            }
            i = j;
            // printf("%d: %d, %d\n", i, x, v);
            if (v == 0 && x == k) {
                c++;
            }
        }

        printf("%d\n", c);
    }

    return 0;
}
