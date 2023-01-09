#include <bits/stdc++.h>
using namespace std;

using lli = long long int;
using str = string;

#define vec vector
#define endn '\n'
#define first_io ios_base::sync_with_stdio(false); cin.tie(NULL);
#define file_io freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
#define test_cases int t; cin >> t; while (t--) { bool is = solve(); cout << (is ? "YES": "NO") << endn; };

template <typename tp, typename tp2> ostream &operator<<(ostream &ostream, const pair<tp, tp2> &p) {return (ostream << p.first << " " << p.second);}
template <typename tp> ostream &operator<<(ostream &ostream, const vector<tp> &v) {int len = v.size(); for (int i = 0; i < len; i++) cout << v[i] << " "; return ostream;}
template <typename tp> ostream &operator<<(ostream &ostream, const set<tp> &s) {for (auto ith : s) cout << ith << " "; return ostream; }
template <typename tp> istream &operator>>(istream &istream, vector<tp> &v) {int len = v.size(); for (int i = 0; i < len; i++) cin >> v[i]; return istream; }

bool is_palindrome(const str &a, int k) {
    int len = a.size();
    for (int i = 0, j = len-1; i < k; i++, j--) {
        if (a[i] != a[len-i-1]) {
            return false;
        }
    }
    return true;
}

bool solve() {
    int n, k;
    cin >> n >> k;
    str a;
    cin >> a;

    if (k == 0) {
        return true;
    }
    
    if (is_palindrome(a, k) && k * 2 < n) {
        return true;
    }
    else {
        return false;
    }
}

int main() {
    first_io;

    test_cases;

    return 0;
}
// Shihab Mahamud (github.com/p-nerd)
// Friday, February 25, 2022 | 03:10:48 PM (+06)
