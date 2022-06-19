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
    int n, res;
    cin >> n;
    if (n > 19) {
        cout << "NO" << endn;
    }
    else {
        cout << "YES" << endn;
        for (int i = 0; i < n; i++) {
            res = pow(3, i);
            cout << res << " ";
        }
        cout << endn;
    }
}

int main() {
    first_io;

    test_cases;

    return 0;
}
// Shihab Mahamud (github.com/shihab4t)
