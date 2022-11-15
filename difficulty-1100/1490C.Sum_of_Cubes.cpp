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

bool find(ll base, ll x)
{
    ll low = 1, high = 10000, mid, tmp;

    while (low <= high)
    {
        mid = low + (high - low) / 2;
        tmp = base + pow(mid, 3);
        if (tmp == x)
            return true;
        if (tmp < x)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return false;
}

bool solve()
{
    ll x;
    cin >> x;

    for (ll i = 1; i <= 10000; i++)
    {
        if (find(pow(i, 3), x))
        {
            cout << "YES" << ed;
            return true;
        }
    }

    cout << "NO" << ed;

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
// Sunday, September 25, 2022 | 12:00:44 PM (+06)
