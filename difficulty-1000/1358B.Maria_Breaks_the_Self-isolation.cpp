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

// 1 1 4 5 5 9

bool solve()
{
    int n;
    cin >> n;
    vec<int> a(n + 1);
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }

    sort(a.begin() + 1, a.end(), greater<int>());

    // for (int i = 1; i <= n; i++)
    // {
    //     cerr << a[i] << gp;
    // }
    // cerr << ed;

    for (int i = 1; i <= n; i++)
    {
        int pre = n - i + 1;
        if (pre >= a[i])
        {
            cout << (n - i + 2) << ed;
            return true;
        }
    }

    cout << 1 << ed;

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
// Tuesday, October 18, 2022 | 08:01:11 AM (+06)
