#include <bits/stdc++.h>
using namespace std;

#define ed '\n'
#define gp ' '
#define ll long long int
#define vec vector
#define str string
#define xbe(x) x.begin(), x.end()

template <typename T> void print(ostream &stream, const vec<T> &v) {
    for (const auto &e : v)
        stream << e << gp;
    stream << ed;
}

void solve() {
    ll n, k, x;
    cin >> n >> k >> x;

    ll first_sum = ceil(k * 1.0 * (k + 1) / 2);
    ll last_sum = 0;
    for (int i = 0, j = n; i < k; i++, j--) {
        last_sum += j;
    }
    // cerr << n << gp << first_sum << gp << last_sum << ed;
    if (first_sum <= x && x <= last_sum) {
        cout << "YES" << ed;
    } else {
        cout << "NO" << ed;
    }
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cerr << boolalpha;
    cout << boolalpha;

    int t;
    cin >> t;
    while (t--)
        solve();

    return 0;
}

// developershihab.com (Portfolio)
// github.com/p-nerd (Code)
// Friday, November 03, 2023 | 10:40:23 AM (+06)
