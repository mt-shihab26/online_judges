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
    ll a, b, x, y, n;
    cin >> a >> b >> x >> y >> n;

    ll y_dif_b = b - y;             // 10 - 5 = 5;
    ll first_dif = min(y_dif_b, n); // 3
    ll x_dif_a = a - x;
    ll second_diff = min(n - first_dif, x_dif_a); // 3 - 3 = 0;

    ll bb = b - first_dif;
    ll aa = a - second_diff;

    ll ans1 = aa * bb;

    first_dif = min(x_dif_a, n);
    second_diff = min(n - first_dif, y_dif_b);

    aa = a - first_dif;
    bb = b - second_diff;

    ll ans2 = aa * bb;

    cout << min(ans1, ans2) << ed;

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
// github.com/p-nerd (Shihab Mahamud)
// Saturday, September 17, 2022 | 01:36:18 AM (+06)
