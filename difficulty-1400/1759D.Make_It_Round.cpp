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
    ll n, m, ct_2 = 0, ct_5 = 0;

    cin >> n >> m;

    ll tmp_n = n;

    while (tmp_n % 2 == 0)
    {
        ct_2++;
        tmp_n /= 2;
    }

    while (tmp_n % 5 == 0)
    {
        ct_5++;
        tmp_n /= 5;
    }

    ll k = 1;

    if (ct_5 > ct_2)
    {
        int diff = ct_5 - ct_2;
        while (diff--)
        {
            if (k * 2ll <= m)
                k *= 2ll;
            else
                break;
        }
    }
    else
    {
        int diff = ct_2 - ct_5;
        while (diff--)
        {
            if (k * 5ll <= m)
                k *= 5ll;
            else
                break;
        }
    }

    while (true)
    {
        if (k * 10ll <= m)
            k *= 10ll;
        else
            break;
    }

    k = (m / k) * k;
    ll ans = n * k;
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
// github.com/shihab4t (Shihab Mahamud)
// Saturday, November 19, 2022 | 03:04:09 PM (+06)
