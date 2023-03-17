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
    vec<ll> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    sort(all(a));

    str sx = to_string(a[n - 1]), sy = to_string(a[n - 2]), sz = to_string(a[n - 3]);

    ll x = stoll(sx + sy + sz);
    ll x2 = stoll(sx + sz + sy);
    ll y = stoll(sy + sz + sx);
    ll y2 = stoll(sy + sx + sz);
    ll z = stoll(sz + sx + sy);
    ll z2 = stoll(sz + sy + sx);

    ll ans = max({x, x2, y, y2, z, z2});

    cout << ans << ed;
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
//