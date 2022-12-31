#include <bits/stdc++.h>
using namespace std;

#define ed '\n'
#define gp ' '
#define lli long long int
#define vec vector
#define str string
#define all(x) x.begin(), x.end()

const int mod = 1e9 + 7;
const int inf = 1e9;

bool solve(int ti = 0)
{
    int n, h, m;

    cin >> n >> h >> m;

    int cur = h * 60 + m, ans = 1e9;

    for (int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;
        int curr = x * 60 + y, xx;
        if (curr < cur)
            xx = (24 * 60) - (cur - curr);
        else
            xx = curr - cur;
        ans = min(ans, xx);
    }
    cout << ans / 60 << " " << ans % 60 << "\n";
    return true;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t, ti;
    cin >> t;
    for (ti = 0; ti < t; ti++)
    {
        solve(ti);
    }

    // solve();

    return 0;
}
// github.com/shihab4t (Shihab Mahamud)
//