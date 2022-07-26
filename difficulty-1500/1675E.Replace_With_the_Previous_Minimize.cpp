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
    int n, k;
    cin >> n >> k;
    str s;
    cin >> s;
    int mx = 0;
    char ch1 = 'z', ch2 = 'z';
    for (int i = 0; i < n; i++)
    {
        if (mx >= s[i] - 'a')
        {
            s[i] = 'a';
        }
        else if (k > 0)
        {
            int diff = (s[i] - 'a') - mx;
            if (k >= diff)
            {
                mx = max(mx, s[i] - 'a');
                s[i] = 'a';
                k -= diff;
            }
            else
            {
                ch1 = s[i];
                s[i] -= k;
                ch2 = s[i];
                k = 0;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (ch2 <= s[i] && s[i] <= ch1)
        {
            s[i] = ch2;
        }
    }

    cout << s << endn;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    test_cases;

    return 0;
}
// Shihab Mahamud (github.com/shihab4t)
// Friday, May 06, 2022 | 03:16:12 PM (+06)
