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
    vec<int> a(n);

    int mxa = 0, mxb = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (i != 0)
            a[i] += a[i - 1];
        mxa = max(mxa, a[i]);
    }
    int m;
    cin >> m;
    vec<int> b(m);
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
        if (i != 0)
            b[i] += b[i - 1];
        mxb = max(mxb, b[i]);
    }

    // cerr << mxa << gp << mxb << ed;

    cout << mxa + mxb << ed;
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
// github.com/shihab4t (Shihab Mahamud)
// Wednesday, October 19, 2022 | 08:32:20 PM (+06)
