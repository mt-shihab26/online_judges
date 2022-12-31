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
    int n, i, j;
    cin >> n;
    vec<int> a(n), ans(n);

    for (i = 0; i < n; i++)
        cin >> a[i];

    int ct = n % 2 == 0 ? (n - 1) / 2 : n / 2;

    sort(a.begin(), a.end());

    for (i = 1, j = 0; j < ct; i += 2, j++)
        ans[i] = a[j];

    for (i = 0, j = ct; i < n; i += 2, j++)
        ans[i] = a[j];

    if (n % 2 == 0)
    {
        ans[n - 1] = a[n - 1];
    }

    cout << ct << ed;

    for (i = 0; i < n; i++)
        cout << ans[i] << gp;
    cout << ed;
    return 0;
}
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}
// github.com/shihab4t (Shihab Mahamud)
// Wednesday, November 23, 2022 | 11:12:25 AM (+06)
