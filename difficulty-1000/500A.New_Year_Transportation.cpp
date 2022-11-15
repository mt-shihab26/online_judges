#include <bits/stdc++.h>
using namespace std;

#define ed '\n'
#define gp ' '
#define lli long long int
#define vec vector
#define str string
#define all(x) x.begin(), x.end()

const int mod = 1e9 + 7;

bool solve(int ti = 0)
{
    int n, t;
    cin >> n >> t;
    vec<int> a(n + 1);
    bool flag = false;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }

    for (int i = 1; i <= n;)
    {
        if (i > t)
            break;
        if (a[i] + i == t)
        {
            flag = true;
            break;
        }
        else
            i += a[i];
    }

    cout << (flag ? "YES" : "NO") << ed;
    return true;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}
// github.com/shh26b (Shihab Mahamud)
// Thursday, July 28, 2022 | 05:00:16 PM (+06)
