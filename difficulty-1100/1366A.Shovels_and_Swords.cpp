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

// 8 7
// 2 1
// 2 1
// 2 1
// 2 1

// 1 2
// 1 2
// 1 2

// 5 1
//

bool solve()
{
    int a, b;

    cin >> a >> b;
    int ans = min({a, b, (a + b) / 3});
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
// Sunday, September 25, 2022 | 01:51:37 AM (+06)
