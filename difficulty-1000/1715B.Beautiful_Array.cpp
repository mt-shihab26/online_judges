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
    ll n, k, b, s;
    cin >> n >> k >> b >> s;

    vec<ll> a(n);
    a[n - 1] = (k * b);

    if (a[n - 1] > s)
    {
        cout << -1 << ed;
        return true;
    }

    if (a[n - 1] + k - 1 <= s)
        a[n - 1] += k - 1;
    else
        a[n - 1] = s;

    ll left = s - a[n - 1];

    for (int i = n - 2; i >= 0 && left > 0; i--)
    {
        int tmp = left >= k - 1 ? k - 1 : left;
        left -= tmp;
        a[i] = tmp;
    }

    if (left > 0)
    {
        cout << -1 << ed;
        return true;
    }

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << gp;
    }
    cout << ed;

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
// Sunday, August 21, 2022 | 04:08:11 AM (+06)
