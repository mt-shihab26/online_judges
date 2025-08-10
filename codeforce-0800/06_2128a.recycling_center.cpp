#include <bits/stdc++.h>

using namespace std;

void tc() {
    int n, c;
    scanf("%d%d", &n, &c);
    vector<int> a;
    for (int i = 0; i < n; i++) {
        int val;
        scanf("%d", &val);
        a.push_back(val);
    }
    sort(a.begin(), a.end());
    int i;
    int j = 1;
    int cost = 0;
    while (n != 0) {
        int n2 = n;
        for (i = 0; i < n; i++) {
            printf("%d ", a[i] * j);
            if (c < (a[i] * j)) {
                n = i - 1;
                break;
            }
        }
        j *= 2;
        cost += n2 - n;
        printf(": %d %d %d %d", n2, n, n2 - n, cost);
        printf("\n");
    }
    printf("\n");
}

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        tc();
    }
}
