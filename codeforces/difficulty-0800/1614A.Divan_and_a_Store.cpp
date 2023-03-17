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
    int n, l, r, k;
    cin >> n >> l >> r >> k;
    vec<int> el;
    int ct = 0, tmp;
    for (int i = 0; i < n; i++)
    {
        cin >> tmp;
        if (l <= tmp && tmp <= r)
        {
            el.push_back(tmp);
        }
    }
    sort(el.begin(), el.end());
    int len =  el.size();
    for (int i = 0; i < len && k >= 0; i++)
    {
        k -= el[i];
        if (k >= 0)
        {
            cerr << k << gp << el[i] << ed;
            ct++;
        }
    }
    cout << ct << ed;
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
// Shihab Mahamud (github.com/p-nerd)
// Monday, June 06, 2022 | 03:52:03 PM (+06)
