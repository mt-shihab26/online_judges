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
    int n, m, k;
    cin >> n >> m >> k;

    if (m <= n / k)
        cout << m << ed;
    else
        cout << (n / k) - (ceil(1.0 * (m - (n / k)) / (k - 1))) << ed;

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
// Thursday, September 15, 2022 | 07:03:04 AM (+06)
