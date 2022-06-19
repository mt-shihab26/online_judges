#include <bits/stdc++.h>
using namespace std;
// Macros
typedef long long int lli;
typedef long double ld;
#define endn "\n"

// Solve
void test(void) {
    int n;
    cin >> n;
    if (n % 2)
        cout << -1 << endn;
    else {
        int even = 2, odd = 1;
        for (int i = 1; i <= n / 2; i++) {
            cout << even << " " << odd << " ";
            even += 2, odd += 2;
        }
        cout << endn;
    }
}

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    test();
    return 0;
}
// by: shihab4t
