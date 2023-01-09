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
    int n, k;
    cin >> n >> k;
    vec<int> a(n), ans(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    int ad = 0;
    ans[0] = a[0];

    for (int i = 1; i < n; i++)
    {
        if (a[i] + ans[i - 1] < k)
        {
            ans[i] = k - ans[i - 1];
            ad += (ans[i] - a[i]);
        }
        else
            ans[i] = a[i];
    }

    cout << ad << ed;
    for (int i = 0; i < n; i++)
        cout << ans[i] << gp;
    cout << ed;

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
// Wednesday, November 23, 2022 | 02:52:54 PM (+06)
