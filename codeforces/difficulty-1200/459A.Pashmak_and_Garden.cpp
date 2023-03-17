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

int solve()
{
    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;

    if (x1 != x2 && y1 != y2 && abs(x1 - x2) != abs(y1 - y2))
    {
        cout << -1 << ed;
        return 1;
    }
    if (x1 == x2)
    {
        cout << x1 + abs(y1 - y2) << gp << y1 << gp << x2 + abs(y1 - y2) << gp << y2 << ed;
        return 1;
    }
    if (y1 == y2)
    {
        cout << x1 << gp << y1 + abs(x1 - x2) << gp << x2 << gp << y2 + abs(x1 - x2) << ed;
        return 1;
    }
    cout << x1 << gp << y2 << gp << x2 << gp << y1 << ed;

    return 1;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}
// github.com/p-nerd (Shihab Mahamud)
// Sunday, December 18, 2022 | 02:42:10 PM (+06)
