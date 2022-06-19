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
template <typename tp> ostream &operator<<(ostream &ostream, const vector<tp> &v) {int len = v.size(); for (int i = 0; i < len; i++) cout << v[i] << " "; return ostream;}
template <typename tp> ostream &operator<<(ostream &ostream, const set<tp> &s) {for (auto ith : s) cout << ith << " "; return ostream; }
template <typename tp> istream &operator>>(istream &istream, vector<tp> &v) {int len = v.size(); for (int i = 0; i < len; i++) cin >> v[i]; return istream; }


int main() {
    first_io;

    int n;
    cin >> n;
    vec<int> a(n);
    cin >> a;
    int i = 0, j = a.size()-1;
    llint sum1 = 0, sum3 = 0, ans = 0;
    while (i <= j) {
        if (sum1 <= sum3) sum1 += a[i++];
        else sum3 += a[j--];
        if (sum1 == sum3) ans = sum1;
        // cout << sum1 << " " << sum3 << endn;
    }
    cout << ans << endn;

    return 0;
}
// Shihab Mahamud (github.com/shihab4t)
// Monday, March 07, 2022 | 08:48:10 AM (+06)
