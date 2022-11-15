#include <bits/stdc++.h>
using namespace std;
// Macros
typedef long long int lli;
typedef long double ld;
#define endn "\n"

// Solve
void test(void) {
    int num, ct = 0;
    cin >> num;
    while (num) {
        if (num >= 100)
            num -= 100;
        else if (num >= 20)
            num -= 20;
        else if (num >= 10)
            num -= 10;
        else if (num >= 5)
            num -= 5;
        else
            break;
        ct++;
    }
    printf("%d", num ? num + ct: ct);
}

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    test();
    return 0;
}
// by: shh26b
