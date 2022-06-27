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

const int mx = 1e5+5;
bool row_taken[mx], col_taken[mx], dig_taken[mx*2], dig2_taken[mx*2];

int main() {
    first_io;

    int n, q;
    cin >> n >> q;

    int x, y;
    while (q--) {
        cin >> x >> y;
        if (!row_taken[x] && !col_taken[y] && !dig_taken[y-x+n] && !dig2_taken[x+y]) {
            cout << "YES" << endn;
            row_taken[x] = true;
            col_taken[y] = true;
            dig_taken[y-x+n] = true;
            dig2_taken[x+y] = true;
        }
        else {
            cout << "NO" << endn;
        }
    }

    return 0;
}
// Shihab Mahamud (github.com/shihab4t)
// Sunday, March 06, 2022 | 08:41:14 AM (+06)
