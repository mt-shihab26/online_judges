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
    int n, m;
    cin >> n >> m;

    int ans = (m - 1) + (n - 1) + m;
    int ans2 = (n - 1) + (m - 1) + n;
    if (n == 1 && m == 1)
    {
        ans = 0;
    }
    cout << min(ans, ans2) << ed;
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
//