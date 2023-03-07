#include <bits/stdc++.h>
using namespace std;

#define ed '\n'
#define gp ' '
#define ll long long int
#define vec vector
#define str string
#define xbe(x) x.begin(), x.end()

void solve()
{
    int n, k;
    cin >> n >> k;
    str s;
    cin >> s;

    map<char, int> mp;

    for (int i = 0; i < n; i++)
    {
        mp[s[i]]++;
    }

    int ct = 0;

    for (auto x : mp)
    {
        char f = x.first;
        char s = x.first >= 'a' && x.first <= 'z' ? x.first - 32 : x.first + 32;
        // cerr << f << gp << s << ed;
        int mn = min(mp[f], mp[s]);
        ct += mn;
        mp[f] -= mn;
        mp[s] -= mn;
    }

    for (auto x : mp)
    {
        // cerr << x.first << gp << x.second << ed;
        if (x.second >= 2 && k > 0)
        {
            int half = x.second / 2;
            if (half <= k)
            {
                ct += half;
                k -= half;
            }
            else
            {
                ct += k;
                k = 0;
            }
            mp[x.first] = x.second - (half * 2);
        }
    }
    // cerr << ed;

    cout << ct << ed;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cerr << boolalpha;
    cout << boolalpha;

    int t;
    cin >> t;
    while (t--)
        solve();

    return 0;
}

// github.com/p-nerd (Shihab Mahamud)
//