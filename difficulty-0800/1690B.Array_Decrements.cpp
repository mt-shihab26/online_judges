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

bool solve()
{
    int n;
    cin >> n;
    vec<int> a(n), b(n);
    cin >> a >> b;

    vec<int> zdiff, diff;

    for (int i = 0; i < n; i++)
    {
        if (b[i] > a[i])
            return false;
        if (b[i] == 0)
            zdiff.push_back(a[i]);
        else
            diff.push_back(a[i]-b[i]);
    }

    int diff_len = diff.size();
    for (int i = 0; i < diff_len; i++)
    {
        if (diff[i] != diff[0])
            return false;
    }
    if (diff_len > 0)
    {
        int zdiff_len = zdiff.size();
        for (int i = 0; i < zdiff_len; i++)
        {
            if (zdiff[i] > diff[0])
                return false;
        }
    }
    // cout << diff << ed << zdiff << ed;
    return true;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        cout << (solve() ? "YES" : "NO") << ed;;
    }

    return 0;
}
// Shihab Mahamud (github.com/shh26b)
// Wednesday, June 08, 2022 | 05:43:04 AM (+06)
