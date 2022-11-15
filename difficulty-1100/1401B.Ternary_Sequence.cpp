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
    int x1, y1, z1, x2, y2, z2;
    cin >> x1 >> y1 >> z1 >> x2 >> y2 >> z2;

    int mn = min(z1, y2);
    z1 -= mn;
    y2 -= mn;

    int ans = mn * 2;

    mn = min(z2, z1);
    z2 -= mn;
    z1 -= mn;

    mn = min(y2, y1);
    y2 -= mn;
    y1 -= mn;

    mn = min(x2, y1);
    x2 -= mn;
    y1 -= mn;

    mn = min(x2, z1);
    x2 -= mn;
    z1 -= mn;

    mn = min(x1, y2);
    x1 -= mn;
    y2 -= mn;

    mn = min(x1, z2);
    x1 -= mn;
    z2 -= mn;

    mn = min(y1, z2);
    y1 -= mn;
    z2 -= mn;

    ans -= (mn * 2);

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
        solve();

    return 0;
}
// github.com/shh26b (Shihab Mahamud)
// Tuesday, November 15, 2022 | 04:54:05 PM (+06)
