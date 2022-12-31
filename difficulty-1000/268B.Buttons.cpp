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
    ll n;
    cin >> n;

    ll x = (n * (n + 1)) / 2;

    for (ll i = n - 2, j = 1; i >= 1; i--, j++)
        x += (i * j);

    cout << x << ed;

    return 1;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}
// github.com/shihab4t (Shihab Mahamud)
// Wednesday, November 23, 2022 | 12:37:53 PM (+06)
