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

bool solve(int ti = 0)
{
    int n;
    cin >> n;

    // 4 -> 3 + 2;
    

    int ans = 0;
    if (n == 1)
        ans = 2;
    else if (n % 3 == 0)
        ans = n / 3;
    else
        ans = n / 3 + 1;

    cout << ans << ed;

    return true;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t, ti;
    cin >> t;
    for (ti = 0; ti < t; ti++)
    {
        solve(ti);
    }

    // solve();

    return 0;
}
// github.com/shh26b (Shihab Mahamud)
//