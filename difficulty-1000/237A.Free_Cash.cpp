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
    int n;
    cin >> n;
    int h, m;

    map<int, int> mp;

    while (n--)
    {
        cin >> h >> m;
        mp[h * 60 + m]++;
    }

    int mx = INT_MIN;

    for (auto it : mp)
    {
        mx = max(mx, it.second);
    }

    cout << mx << ed;

    return true;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // int t;
    // cin >> t;
    // while (t--)
    solve();

    return 0;
}
// github.com/shihab4t (Shihab Mahamud)
// Tuesday, August 16, 2022 | 07:55:38 PM (+06)
