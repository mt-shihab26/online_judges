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

// 1378^4 % 10 = (1378 % 10 * 1378 % 10 * 1378 % 10 * 1378 % 10) % 10
//             = (8 * 8 * 8 * 8) % 10

int bigmod(int a, int b, int mod)
{
    if (b == 0)
        return 1;
    if (b == 1)
        return a % mod;

    int res = bigmod(a, b / 2, mod);

    res = (1LL * res * res) % mod;
    if (b % 2 == 1)
        res = (1LL * res * a) % mod;

    return res;
}

bool solve(int ti = 0)
{
    int n;
    cin >> n;

    int ans = bigmod(8, n, 10);

    cout << ans << ed;
    return true;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}
// github.com/shh26b (Shihab Mahamud)
// Wednesday, August 10, 2022 | 07:52:31 AM (+06)
