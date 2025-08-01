#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    char c[101];
    scanf("%s", c);

    int flags[100];
    for (int i = 0; i < 100; i++) {
        flags[i] = 0;
    }

    for (int i = 0; i < n; i++) {
        // printf("%c %d %c\n", c[i], c[i], c[i]);
        if ('a' <= c[i] && c[i] <= 'z') {
            // printf("x: %c%d\n", c[i], c[i] - 'a' + 1);
            flags[c[i] - 'a'] = 1;
        } else if ('A' <= c[i] && c[i] <= 'Z') {
            // printf("y: %c%d\n", c[i], c[i] - 'a' + 1);
            flags[(c[i] + ('a' - 'A')) - 'a'] = 1;
        }
    }

    for (int i = 0; i < 26; i++) {
        // printf("%d: %d\n", i, flags[i]);
        if (flags[i] == 0) {
            printf("NO\n");
            return 0;
        }
    }
    printf("YES\n");

    return 0;
}
