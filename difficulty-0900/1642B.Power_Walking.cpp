#include <bits/stdc++.h>
using namespace std;

using lli = long long int;
using str = string;

#define vec vector
#define endn '\n'
#define first_io                      \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
#define file_io                       \
    freopen("input.txt", "r", stdin); \
    freopen("output.txt", "w", stdout);
#define test_cases                    \
    int t;cin >> t;while (t--) solve();

template <typename tp, typename tp2>
ostream &operator<<(ostream &ostream, const pair<tp, tp2> &p) {
    return (ostream << p.first << " " << p.second);}
template <typename tp>
ostream &operator<<(ostream &ostream, const vector<tp> &c) {
    int len = c.size();
    for (int i = 0; i < len; i++)
        cout << c[i] << " ";
    return ostream;}
template <typename tp>
ostream &operator<<(ostream &ostream, const set<tp> &s) {
    for (auto ith : s)
        cout << ith << " ";
    return ostream; }


void solve() {
    int n;
    cin >> n;
    vec<int> a(n);
    map<int, int> mp;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        mp[a[i]]++;
    }

    int len = mp.size();

    for (int i = 1; i <= n; i++) {
        cout << max(len, i) << " ";
    }
    cout << endn;
}

int main() {
    first_io;

    test_cases;

    return 0;
}
// Shihab Mahamud (github.com/shh26b)