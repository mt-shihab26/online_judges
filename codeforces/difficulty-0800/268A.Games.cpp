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
    int h[n], a[n];
    for (int i = 0; i < n; i++)
        cin >> h[i] >> a[i];
    int j, count, result = 0;
    for (int i = 0; i < n; i++) {
        count = 0;
        for (j = 0; j < n; j++) {
            if (h[i] == a[j]) {
                count++;
            }
        }
        result += count;
    }
    cout << result << endn;
}

int main(void) {
    test();
    return 0;
}
// by: p-nerd
