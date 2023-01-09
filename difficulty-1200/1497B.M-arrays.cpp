#include <bits/stdc++.h>
using namespace std;

using lli = long long int;
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

template <typename tp, typename tp2>
ostream &operator<<(ostream &ostream, const map<tp, tp2> &s)
{
    for (auto ith : s)
        cout << ith.first << " " << ith.second << "\n";
    return ostream;
}

void solve()
{
    int n, m;
    cin >> n >> m;
    map<int, int> mp;
    int tmp;
    for (int i = 0; i < n; i++)
    {
        cin >> tmp;
        mp[tmp % m]++;
    }

    int ct = 0, another, mx, mn;

    // cout << mp << endn;

    for (pair<int, int> ith : mp)
    {
        if (ith.first == 0)
        {
            ct++;
            continue;
        }
        if (ith.second != 0)
        {
            another = m - ith.first;
            if (mp[another] == 0)
            {
                ct += ith.second;
            }
            else
            {
                ct++;
                int diff = abs(ith.second - mp[another]);
                if (diff > 1)
                {
                    ct += (diff - 1);
                }
                mp[another] = 0;
            }
            // cout << ith << " " << ct << "\n";
        }
    }
    cout << ct << endn;
}

int main()
{
    first_io;

    test_cases;

    return 0;
}
// Shihab Mahamud (github.com/p-nerd)
// Thursday, February 24, 2022 | 12:25:13 PM (+06)
