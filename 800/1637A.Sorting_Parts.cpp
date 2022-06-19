#include <bits/stdc++.h>
using namespace std;

using lli =     long long int;
using str =     string;
#define vec     vector
#define endn    '\n'

#define test_cases \
    int t; cin >> t; while (t--) solve();
template <typename tp>
void print(vector<tp> &vc) {
    for (auto &ith : vc)
        cout << ith << endn;
    cout << '\n';}


void solve() {
    int n;
    cin >> n;
    vec<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 1; i < n; i++) {
        if (a[i-1] > a[i]) {
            cout << "YES" << endn;
            return;
        }
    }
    cout << "NO" << endn;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    test_cases;

    return 0;
}
// Sunday, February 13, 2022 | 09:07:07 AM (+06)
