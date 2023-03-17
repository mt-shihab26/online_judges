#include <stdio.h>

int max(int x, int y) {
    if (x > y) return x;
    else return y;
}

int max_of_four(int a, int b, int c, int d) {
    int mx = max(a, b);
    mx = max(mx, c);
    mx = max(mx, d);
    return mx;
}

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}