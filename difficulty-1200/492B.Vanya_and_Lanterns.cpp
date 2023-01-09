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

int solve()
{
    int n, l;
    cin >> n >> l;
    vec<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    sort(a.begin(), a.end());

    int mx = 2 * max(a[0], l - a[n - 1]);

    for (int i = 1; i < n; i++)
    {
        mx = max(mx, a[i] - a[i - 1]);
    }
    double ans = (1.0 * mx / 2);
    cout << fixed << setprecision(10) << ans << ed;

    return 1;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}
// github.com/p-nerd (Shihab Mahamud)
// Saturday, December 03, 2022 | 04:42:10 PM (+06)
