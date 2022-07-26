#include <bits/stdc++.h>
using namespace std;

typedef long long int llint;
typedef unsigned long long int ullint;
typedef short int sint;
#define endn "\n"
#define umap unordered_map
#define uset unordered_set

void test() {
    int n;
    cin >> n;
    int ans = n / 10;
    int last = n % 10;
    if (last == 9) {
        ans++;
    }
    cout << ans << endn;
}

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        test();
    }
}
// Solved By: shihab4t
// Thursday, July 22, 2021 | 08:37:50 PM (+06)
