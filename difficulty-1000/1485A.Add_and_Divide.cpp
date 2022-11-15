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
    int a, b, count, ans = INT_MAX;
    cin >> a >> b;

    for (ll i = 0; i * i <= a; i++)
    {
        if (b == 1 && i == 0)
            continue;
        count = i;

        ll c = a;
        while (c)
        {
            c /= (b + i);
            count++;
        }
        ans = min(ans, count);
    }
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
// Monday, August 22, 2022 | 06:28:37 AM (+06)
