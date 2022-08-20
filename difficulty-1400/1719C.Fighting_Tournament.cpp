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
    int n, q;
    cin >> n >> q;

    int mx = INT_MIN;
    vec<int> a(n + 1), oa(n + 1);
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        oa[i] = a[i];
        mx = max(mx, a[i]);
    }

    map<int, pair<int, int>> mp;

    for (int i = 2, j = 1; i <= n; i++, j++)
    {
        if (a[i - 1] > a[i])
        {
            if (!mp[a[i - 1]].second)
                mp[a[i - 1]] = {j, j};
            a[i] = a[i - 1];
        }
        else
        {
            if (mp[a[i - 1]].first)
                mp[a[i - 1]].second = j - 1;

            if (!mp[a[i]].second)
                mp[a[i]] = {j, j};
        }
    }

    // for (auto it : mp)
    // {
    //     cerr << n << gp << it.first << gp << it.second.first << gp << it.second.second << ed;
    // }

    int x, y;

    while (q--)
    {
        cin >> x >> y;
        if (oa[x] == mx)
        {
            if (mp[oa[x]].first > y)
                cout << 0 << ed;
            else if (mp[oa[x]].second <= y)
                cout << y - (mp[oa[x]].first - 1) << ed;
            else
                cout << y - (mp[oa[x]].first - 1) << ed;
        }
        else
        {
            if (mp[oa[x]].second == 0)
                cout << 0 << ed;
            else if (mp[oa[x]].first <= y && y <= mp[oa[x]].second)
                cout << y - mp[oa[x]].first + 1 << ed;
            else if (mp[oa[x]].first > y)
                cout << 0 << ed;
            else
                cout << (mp[oa[x]].second - (mp[oa[x]].first - 1)) << ed;
        }
    }

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
// Friday, August 19, 2022 | 03:57:37 PM (+06)
