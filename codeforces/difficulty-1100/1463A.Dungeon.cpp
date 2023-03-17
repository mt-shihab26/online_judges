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
    int a, b, c;
    cin >> a >> b >> c;

    if ((a + b + c) % 9 != 0)
        cout << "NO" << ed;
    else if (min({a, b, c}) >= (a + b + c) / 9)
        cout << "YES" << ed;
    else
        cout << "NO" << ed;

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
// Saturday, November 05, 2022 | 09:11:30 AM (+06)
