#include <stdio.h>

int main() {
    int t;
    int a, b, c;

    scanf("%d", &t);

    for (int i = 0; i < t; i++) {
        scanf("%d %d %d", &a, &b, &c);

        if (a + b == c) {
            printf("YES\n");
            continue;
        } else if (a + c == b) {
            printf("YES\n");
            continue;
        } else if (b + c == a) {
            printf("YES\n");
            continue;
        } else {
            printf("NO\n");
        }
    }

    return 0;
}
