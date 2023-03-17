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
    int n;
    char digit = '1';
    cin >> n;
    str ans = "";
    while (n)
    {
        n -= 2;
        digit = '1';
        if (n == 1)
        {
            ans = '7' + ans;
            n = 0;
        }
        else
            ans += digit;
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
// github.com/p-nerd (Shihab Mahamud)
// Saturday, August 20, 2022 | 11:47:45 AM (+06)
