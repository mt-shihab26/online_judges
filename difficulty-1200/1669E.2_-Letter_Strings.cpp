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

bool is_satisfied(str a, str b)
{
    if (a[0] == b[0] && a[1] != b[1])
    {
        return true;
    }
    if (a[1] == b[1] && a[0] != b[0])
    {
        return true;
    }

    return false;
}

/* -------------------- solution start -------------------- */

void solve()
{
    int n;
    cin >> n;
    str tmp;
    vec<str> strs;
    for (int i = 0; i < n; i++)
    {
        cin >> tmp;
        strs.push_back(tmp);
    }

    map<char, llint> mp;
    map<char, llint> mp1;
    map<str, llint> mp2;

    for (int i = 0; i < n; i++)
    {
        mp[strs[i][0]]++;
        mp1[strs[i][1]]++;
        mp2[strs[i]]++;
    }

    llint will_sub = 0;
    for (auto ith : mp2)
    {
        if (ith.second > 1)
        {
            will_sub += (ith.second - 1) * ith.second;
        }
    }

    llint res = 0;
    for (auto ith : mp)
    {
        if (ith.second > 1)
        {
            res += (ith.second - 1) * ith.second / 2;
        }
    }
    for (auto ith : mp1)
    {
        if (ith.second > 1)
        {
            res += (ith.second - 1) * ith.second / 2;
        }
    }

    // cout << mp << endn;
    // cout << mp1 << endn;
    // cout << mp2 << endn;
    // cout << res << " " << will_sub << endn;
    // cout << res - will_sub << endn << endn;
    cout << res - will_sub << endn;
}

int main()
{
    first_io;

    test_cases;

    return 0;
}
// Shihab Mahamud (github.com/shihab4t)
// Saturday, April 23, 2022 | 08:07:47 AM (+06)