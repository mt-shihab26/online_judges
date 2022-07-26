#include <bits/stdc++.h>
using namespace std;

using lli = long long int;
using str = string;

#define vec vector
#define endn '\n'
#define first_io ios_base::sync_with_stdio(false); cin.tie(NULL);
#define file_io freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
#define test_cases int t; cin >> t; while (t--) solve();

template <typename tp, typename tp2> ostream &operator<<(ostream &ostream, const pair<tp, tp2> &p) {return (ostream << p.first << " " << p.second);}
template <typename tp> ostream &operator<<(ostream &ostream, const vector<tp> &v) {int len = v.size(); for (int i = 0; i < len; i++) cout << v[i] << " "; return ostream;}
template <typename tp> ostream &operator<<(ostream &ostream, const set<tp> &s) {for (auto ith : s) cout << ith << " "; return ostream; }
template <typename tp> istream &operator>>(istream &istream, vector<tp> &v) {int len = v.size(); for (int i = 0; i < len; i++) cin >> v[i]; return istream; }


void solve() {
    int n;
    vec<pair<int, int>> a(3);
    cin >> a[0].first >> a[0].second;
    cin >> a[1].first >> a[1].second;
    cin >> a[2].first >> a[2].second;

    int ans = 0;

    if (a[0].second == a[1].second && a[2].second < a[0].second) {
        ans += abs(a[0].first - a[1].first);
    }

    if (a[0].second == a[2].second && a[1].second < a[0].second) {
        ans += abs(a[0].first - a[2].first);
    }

    if (a[1].second == a[2].second && a[0].second < a[1].second) {
        ans += abs(a[1].first - a[2].first);
    }
    cout << ans << endn;
}


int main() {
    first_io;

    test_cases;

    return 0;
}
// Shihab Mahamud (github.com/shihab4t)
// Wednesday, February 23, 2022 | 08:03:24 PM (+06)
