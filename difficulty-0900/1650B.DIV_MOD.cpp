#include <bits/stdc++.h>
using namespace std;

using llint = long long int;
using str = string;

#define vec vector
#define endn '\n'
#define first_io ios_base::sync_with_stdio(false); cin.tie(NULL);
#define file_io freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
#define test_cases int t; cin >> t; while (t--) solve();

template <typename tp, typename tp2> ostream &operator<<(ostream &ostream, const pair<tp, tp2> &p) {return (ostream << p.first << " " << p.second);}
template <typename tp, typename tp2> ostream &operator<<(ostream &ostream, const map<tp, tp2> &mp) { auto end = mp.end(); for (auto it = mp.begin(); it != end; it++) cout << it->first << " " << it->second << "\n";return ostream; }
template <typename tp> ostream &operator<<(ostream &ostream, const vector<tp> &v) {int len = v.size(); for (int i = 0; i < len; i++) cout << v[i] << " "; return ostream;}
template <typename tp> ostream &operator<<(ostream &ostream, const set<tp> &s) {for (auto ith : s) cout << ith << " "; return ostream; }
template <typename tp> istream &operator>>(istream &istream, vector<tp> &v) {int len = v.size(); for (int i = 0; i < len; i++) cin >> v[i]; return istream; }


void solve() {
    llint l, r, a;
    cin >> l >> r >> a;

    llint e = l / a;
    llint f = l % a;
    llint g = r / a;
    llint h = r % a;

    if (e == g) {
        cout << (h+g) << endn;
    }
    else {
        int x = max(g+h, g+a-2);
        cout << x << endn;
    }
}

int main() {
    first_io;

    test_cases;

    return 0;
}
// Shihab Mahamud (github.com/shihab4t)
// Tuesday, March 08, 2022 | 08:49:11 PM (+06)