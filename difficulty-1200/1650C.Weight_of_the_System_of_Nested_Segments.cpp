#include <bits/stdc++.h>
using namespace std;

using llint = long long int;
using str = string;

#define vec vector
#define endn '\n'
#define first_io                      \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
#define file_io                       \
    freopen("input.txt", "r", stdin); \
    freopen("output.txt", "w", stdout);
#define test_cases \
    int t;         \
    cin >> t;      \
    while (t--)    \
        solve();

template <typename tp, typename tp2>
ostream &operator<<(ostream &ostream, const pair<tp, tp2> &p)
{
    return (ostream << p.first << " " << p.second);
}
template <typename tp, typename tp2>
ostream &operator<<(ostream &ostream, const map<tp, tp2> &mp)
{
    auto end = mp.end();
    for (auto it = mp.begin(); it != end; it++)
        cout << it->first << " " << it->second << "\n";
    return ostream;
}
template <typename tp>
ostream &operator<<(ostream &ostream, const vector<tp> &v)
{
    int len = v.size();
    for (int i = 0; i < len; i++)
        cout << v[i] << " ";
    return ostream;
}
template <typename tp>
ostream &operator<<(ostream &ostream, const set<tp> &s)
{
    for (auto ith : s)
        cout << ith << " ";
    return ostream;
}
template <typename tp>
istream &operator>>(istream &istream, vector<tp> &v)
{
    int len = v.size();
    for (int i = 0; i < len; i++)
        cin >> v[i];
    return istream;
}

void solve()
{
    int n, m;
    vec<vec<int>> a;
    int x, y;
    cin >> n >> m;
    for (int i = 1; i <= m; i++)
    {
        cin >> x >> y;
        a.push_back({i, x, y});
    }

    sort(a.begin(), a.end(), [](vec<int> a, vec<int> b) -> bool
         { return a[2] < b[2]; });

    vec<vec<int>> b;

    int ans2 = 0;
    for (int i = 0; i < n * 2; i++)
    {
        ans2 += a[i][2];
        b.push_back(a[i]);
    }

    sort(b.begin(), b.end(), [](vec<int> a, vec<int> b) -> bool
         { return a[1] < b[1]; });

    cout << ans2 << endn;
    for (int i = 0, j = (n * 2) - 1; i < j; i++, j--)
    {
        cout << b[i][0] << " " << b[j][0] << endn;
    }
    cout << endn;
}

int main()
{
    first_io;

    test_cases;

    return 0;
}
// Shihab Mahamud (github.com/shihab4t)
// Wednesday, March 09, 2022 | 09:41:13 AM (+06)
