#include <bits/stdc++.h>
using namespace std;

#define ed '\n'
#define gp ' '
#define ll long long int
#define vec vector
#define str string
#define all(x) x.begin(), x.end()

const int
    mod = 1e9 + 7,
    inf = 1e9;

int solve();

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cerr << boolalpha;
    cout << boolalpha;

    int t;
    cin >> t;
    while (t--)
        solve();

    return 0;
}

int solve()
{
    ll n, k;
    cin >> n >> k;

    int x = n;
    for (int i = 2; i <= k; i++)
    {
        ll x = 9, y = 0, p = n;
        while (p)
        {
            x = min(x, p % 10);
            y = max(y, p % 10);
            p /= 10;
        }
        if (!x)
            break;
        n += (x * y);
    }

    cout << n << ed;

    return 1;
}

// github.com/p-nerd (Shihab Mahamud)
// Wednesday, February 01, 2023 | 06:05:37 PM (+06)
