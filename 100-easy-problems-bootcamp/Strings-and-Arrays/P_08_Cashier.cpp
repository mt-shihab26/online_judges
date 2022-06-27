#include <bits/stdc++.h>
using namespace std;

using lli = long long int;
using str = string;

#define vec         vector
#define endn        '\n'
#define first_io    ios_base::sync_with_stdio(false); cin.tie(NULL);
#define file_io     freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
#define test_cases  int t; cin >> t; while (t--) solve();

template <typename tp> void print(tp arr[], int n) {for (int i = 0; i < n; i++) cout << arr[i] << " "; cout << '\n';}
template <typename tp> void print(vector<tp> &vc) {for (auto &ith : vc) cout << ith << " "; cout << '\n';}
template <typename tp> void print(set<tp> &s) {for (auto ith : s) {cout << ith << " ";} cout << endn;}


void solve() {
    int n, L, a;
    cin >> n >> L >> a;
    vec<int> t(n), l(n);
    for (int i = 0; i < n; i++) {
        cin >> t[i] >> l[i];
    }

    int ct = 0, diff;

    if (n > 0) {
        ct += t[0] / a;
    }

    for (int i = 1; i < n; i++) {
        ct += (t[i] - (t[i-1]+l[i-1])) / a;
    }
    
    if (n > 0) {
        diff = L - (t[n-1] + l[n-1]);
        ct += diff / a;
    } else {
        ct += L / a;
    }
    cout << ct << endn;
}

int main() {
    first_io;

    solve();

    return 0;
}
// Shihab Mahamud (github.com/shihab4t)
// Friday, February 18, 2022 | 02:22:13 PM (+06)
