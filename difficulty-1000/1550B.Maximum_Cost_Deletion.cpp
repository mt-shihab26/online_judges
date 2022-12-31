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

ll solve()
{
    ll n, a, b;
    str arr;
    cin >> n >> a >> b >> arr;

    ll ans = (1ll * a * n);

    if (b >= 0)
        return ans + (b * n);

    int g = 1;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] != arr[i - 1])
            g++;
    }

    return ans + (((g / 2) + 1) * b);
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
        cout << solve() << ed;

    return 0;
}
// github.com/shihab4t (Shihab Mahamud)
// Saturday, October 22, 2022 | 08:28:26 AM (+06)
