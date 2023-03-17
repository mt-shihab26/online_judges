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
    ll r, g, b, w, even = 0;
    cin >> r >> g >> b >> w;
    if (r % 2 == 0)
        even++;
    if (g % 2 == 0)
        even++;
    if (b % 2 == 0)
        even++;
    if (w % 2 == 0)
        even++;

    if (r == 0 || g == 0 || b == 0)
    {
        if (even >= 3)
            cout << "Yes" << ed;
        else
            cout << "No" << ed;
    }
    else
    {
        if (even != 2)
            cout << "Yes" << ed;
        else
            cout << "No" << ed;
    }
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
// Tuesday, August 16, 2022 | 11:56:35 AM (+06)
