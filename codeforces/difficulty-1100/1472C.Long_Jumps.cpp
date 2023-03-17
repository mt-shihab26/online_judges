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
    cin >> n;

    vec<int> a(n + 1);

    for (int i = 1; i <= n; i++)
        cin >> a[i];

    vec<int> mem(n + 1);
    int mx = INT_MIN, j;

    for (int i = n; i >= 1; i--)
    {
        j = a[i] + i;
        if (j > n)
            mem[i] = a[i];
        else
            mem[i] = mem[j] + a[i];
    }

    for (int i = 1; i <= n; i++)
    {
        // cerr << mem[i] << gp;
        mx = max(mx, mem[i]);
    }
    // cerr << ed;

    cout << mx << ed;

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
// Monday, September 26, 2022 | 10:36:11 AM (+06)
