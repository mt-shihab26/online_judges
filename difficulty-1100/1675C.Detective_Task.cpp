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
    str s;
    cin >> s;
    int n = s.length();
    int ct = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '1')
        {
            ct = 1;
        }
        else if (s[i] == '0')
        {
            ct++;
            break;
        }
        else
        {
            ct++;
        }
    }
    cout << ct << endn;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    test_cases;

    return 0;
}
// Shihab Mahamud (github.com/shihab4t)
