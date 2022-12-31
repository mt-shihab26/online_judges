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
    int l, r, x, a, b;
    cin >> l >> r >> x;
    cin >> a >> b;

    if (a == b)
        return 0;

    if (abs(b - a) >= x)
        return 1;

    if (a < b)
    {
        if (b + x <= r || a - x >= l)
            return 2;

        if (a + x <= r && b - l >= x)
            return 3;

        return -1;
    }

    if (a > b)
    {
        if (a + x <= r || b - x >= l)
            return 2;

        if (a - x >= l && r - b >= x)
            return 3;

        return -1;
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
        cout << solve() << ed;

    return 0;
}
// github.com/shihab4t (Shihab Mahamud)
// Saturday, November 19, 2022 | 05:06:31 PM (+06)
