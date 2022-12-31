#include <bits/stdc++.h>
using namespace std;

#define ed '\n'
#define gp ' '
#define ll long long int
#define vec vector
#define str string
#define all(x) x.begin(), x.end()

const int mod = 1e9 + 7;
const int inf = 1e9;

bool solve()
{
    str s;
    cin >> s;
    int len = s.length();

    bool is_r = true;
    for (int i = 0; i < len; i++)
    {
        if (s[i] != 'R')
            is_r = false;
    }
    if (is_r)
    {
        cout << 1 << ed;
        return true;
    }
    bool is_l = true;
    for (int i = 0; i < len; i++)
    {
        if (s[i] != 'L')
            is_l = false;
    }
    if (is_l)
    {
        cout << len + 1 << ed;
        return true;
    }

    int ct = 1, mx = 0;
    for (int i = 0; i < len; i++)
    {
        // cout << s[i] << gp;
        if (s[i] == 'L')
        {
            ct++;
        }
        else
        {
            mx = max(ct, mx);
            ct = 1;
        }
    }
    mx = max(ct, mx);

    cout << mx << ed;

    return true;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
        solve();

    return 0;
}
// github.com/shihab4t (Shihab Mahamud)
// Friday, October 14, 2022 | 02:00:26 AM (+06)
