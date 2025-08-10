#include <bits/stdc++.h>

using namespace std;

void tc() {
    int n;
    scanf("%d\n", &n);

    int score = 0;
    for (int i = 0; i < n; i++) {
        int val;
        scanf("%d\n", &val);
        if (val == 0) {
            score += 1;
        }
        score += val;
    }

    printf("%d\n", score);
}

int main() {
    int t;
    scanf("%d\n", &t);

    while (t--) {
        tc();
    }
}
