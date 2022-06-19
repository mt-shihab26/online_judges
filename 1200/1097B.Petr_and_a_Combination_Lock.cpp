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
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    vec<int> a(n);

    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        sum += a[i];
    }

    int last = 1 << n, tmp_sum;

    bool is_yes = false;

    if (sum % 360 == 0)
        is_yes = true;

    // cout << sum << " ";

    for (int mask = 1; mask < last; mask++)
    {
        tmp_sum = 0;
        for (int j = 0; j < n; j++)
        {
            if (mask & (1 << j))
            {
                tmp_sum += a[j];
            }
        }
        if (sum - tmp_sum == tmp_sum || sum - 360 - tmp_sum == tmp_sum)
        {
            // cout << tmp_sum << " ";
            is_yes = true;
        }
    }

    cout << (is_yes ? "YES" : "NO") << endn;

    return 0;
}
// Shihab Mahamud (github.com/shihab4t)
// Sunday, May 08, 2022 | 12:43:23 AM (+06)
