#include <bits/stdc++.h>
using namespace std;

#define ed '\n'
#define gp ' '
#define ll long long int
#define vec vector
#define str string
#define all(x) x.begin(), x.end()

const int
    mod = 1e9 + 7,
    inf = 1e9;

int solve();

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cerr << boolalpha;
    cout << boolalpha;

    int t;
    cin >> t;
    while (t--)
        solve();

    return 0;
}

int solve()
{
    int a1, a2, a3, a4;
    cin >> a1 >> a2 >> a3 >> a4;

    int sm = a1 + a2 + a3 + a4;
    int ans = a1;

    if (a1 > 0)
    {
        int mn = min(a2, a3);
        ans += 2 * mn;
        a2 -= mn;
        a3 -= mn;
    }

    a2 = min(a1, a2);
    a3 = min(a1, a3);
    ans += a2 + a3;

    a4 = min({a4, a1 - a3, a1 - a2});
    ans += a4;

    cout << min(ans + 1, sm) << ed;

    return 1;
}

// github.com/p-nerd (Shihab Mahamud)
//