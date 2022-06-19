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

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, l, r, x;
    cin >> n >> l >> r >> x;
    vec<int> c(n);
    cin >> c;
    sort(c.begin(), c.end());

    int last = (1 << n) - 1;
    int ct = 0;

    for (int mask = 0; mask <= last; mask++)
    {
        int bit_count = __builtin_popcount(mask);
        int total = 0, smallest = INT_MAX, biggest = INT_MIN;
        if (bit_count >= 2)
        {
            smallest = INT_MAX, biggest = INT_MIN;
            for (int i = 0; i < n; i++)
            {
                if (mask & (1 << i))
                {
                    total += c[i];
                    smallest = min(smallest, c[i]);
                    biggest = max(biggest, c[i]);
                }
            }
            if (l <= total && total <= r && biggest - smallest >= x)
            {
                ct++;
            }
        }
    }
    cout << ct << endn;

    return 0;
}
// Shihab Mahamud (github.com/shihab4t)
// Sunday, May 08, 2022 | 03:31:17 AM (+06)
