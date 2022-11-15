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
    ll n, tmp;
    cin >> n;
    vec<ll> ctn(3);
    for (ll i = 0; i < n; i++)
    {
        cin >> tmp;
        ctn[tmp % 3]++;
    }

    ll mn = min(ctn[1], ctn[2]);

    ctn[1] = ctn[1] - mn;
    ctn[2] = ctn[2] - mn;

    ll ans = ctn[0] + mn + (ctn[1] / 3) + (ctn[2] / 3);

    cerr << ctn[0] << gp << ctn[1] << gp << ctn[2] << ed;

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
// Sunday, August 21, 2022 | 03:29:31 PM (+06)
