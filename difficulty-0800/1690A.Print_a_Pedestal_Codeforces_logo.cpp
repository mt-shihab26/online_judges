#include <bits/stdc++.h>
using namespace std;

template <typename T> istream &operator>>(istream &istream, vector<T> &v) { int len = v.size(); for (int i = 0; i < len; i++) cin >> v[i]; return istream; }
template <typename T> ostream &operator<<(ostream &ostream, const set<T> &s) { for (auto ith : s) cout << ith << " "; return ostream;}
template <typename T> ostream &operator<<(ostream &ostream, const vector<T> &v) { for (auto ith : v) cout << ith << " "; return ostream; }
template <typename T, typename T2> ostream &operator<<(ostream &ostream, const pair<T, T2> &p) { return (ostream << p.first << " " << p.second); }
template <typename T, typename T2> ostream &operator<<(ostream &ostream, const map<T, T2> &mp) { for (auto ith : mp) cout << ith << "\n"; return ostream;}

#define ed '\n'
#define gp ' '
#define i64 long long int
#define str string
#define vec vector

void solve()
{
    int n, p1, p2, p3; cin >> n;
    for (int i = 1; i <= n; i++)
    {
        p1 = i;
        p2 = ((n - p1) / 2) + 1;
        p3 = n - p2 - p1;

        if (p1 > 0 && p2 > 0 && p3 > 0 && p1 > p2 && p2 > p3)
        {
            break;
        }
    }
    cout << p2 << " " << p1 << " " << p3 << ed;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
// Shihab Mahamud (github.com/shihab4t)
// Wednesday, June 08, 2022 | 05:28:42 AM (+06)
