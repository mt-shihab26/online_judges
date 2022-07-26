#include <bits/stdc++.h>
using namespace std;

template <typename T>
istream &operator>>(istream &istream, vector<T> &v)
{
    int len = v.size();
    for (int i = 0; i < len; i++)
        cin >> v[i];
    return istream;
}
template <typename T>
ostream &operator<<(ostream &ostream, const set<T> &s)
{
    for (auto ith : s)
        cout << ith << " ";
    return ostream;
}
template <typename T>
ostream &operator<<(ostream &ostream, const vector<T> &v)
{
    for (auto ith : v)
        cout << ith << " ";
    return ostream;
}
template <typename T, typename T2>
ostream &operator<<(ostream &ostream, const pair<T, T2> &p)
{
    return (ostream << p.first << " " << p.second);
}
template <typename T, typename T2>
ostream &operator<<(ostream &ostream, const map<T, T2> &mp)
{
    for (auto ith : mp)
        cout << ith << "\n";
    return ostream;
}

#define str string
#define vec vector
#define endn '\n'
#define test_cases \
    int t;         \
    cin >> t;      \
    while (t--)    \
        solve();

/* -------------------- solution start -------------------- */

void solve()
{
    int n, m;
    cin >> n >> m;
    int a[n][m];
    int l, o, i, j;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }

    int64_t mx = LLONG_MIN;

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            // cout << a[i][j] << " ";
            int64_t tmp = 0;
            for (l = j, o = i; l >= 0 && o >= 0; l--, o--)
            {
                tmp += a[o][l];
            }
            for (o = i + 1, l = j + 1; o < n && l < m; o++, l++)
            {
                tmp += a[o][l];
            }
            for (o = i - 1, l = j + 1; o >= 0 && l < m; o--, l++)
            {
                tmp += a[o][l];
            }
            for (o = i + 1, l = j - 1; o < n && l >= 0; o++, l--)
            {
                tmp += a[o][l];
            }

            mx = max(tmp, mx);
        }
        // cout << endn;
    }

    cout << mx << endn;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    test_cases;

    return 0;
}
// Shihab Mahamud (github.com/shihab4t)
