#include <bits/stdc++.h>
using namespace std;

#define ed '\n'
#define gp ' '
#define lli long long int
#define vec vector
#define str string
#define all(x) x.begin(), x.end()

bool solve()
{
    int n, m, x, y, i;
    cin >> n >> m;
    vec<lli> points(n);
    for (i = 0; i < n; i++)
        cin >> points[i];

    vec<int> adj[n];
    lli ans = LLONG_MAX;
    for (i = 0; i < m; i++)
    {
        cin >> x >> y;
        x--, y--;
        adj[x].push_back(y);
        adj[y].push_back(x);
        ans = min(ans, points[x] + points[y]);
    }

    for (i = 0; i < n; i++)
        if (adj[i].size() % 2 == 1)
            ans = min(ans, points[i]);

    if (m % 2 == 0)
        cout << 0 << ed;
    else
        cout << ans << ed;

    return true;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    // solve();

    return 0;
}
// github.com/shihab4t (Shihab Mahamud)
// Monday, July 25, 2022 | 05:35:27 AM (+06)
