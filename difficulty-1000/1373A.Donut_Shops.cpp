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
    ll a, b, c;
    cin >> a >> b >> c;

    ll x1 = -1, x2 = -1;

    if (a < c)
        x1 = 1;

    if (a * b > c)
        x2 = b;

    cout << x1 << gp << x2 << ed;
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
// Tuesday, August 16, 2022 | 10:30:05 AM (+06)
