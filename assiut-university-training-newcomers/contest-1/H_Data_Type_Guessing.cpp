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
    ll n, k, a;
    cin >> n >> k >> a;

    ll ans = n * k;

    if (ans % a != 0)
    {
        cout << "double" << ed;
        return 1;
    }

    ll x = ans / a;
    if (-2147483647 <= x && x <= 2147483647)
    {
        cout << "int" << ed;
    }
    else
    {
        cout << "long long" << ed;
    }

    return 1;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}
// github.com/p-nerd (Shihab Mahamud)
// Saturday, December 31, 2022 | 03:46:43 PM (+06)
