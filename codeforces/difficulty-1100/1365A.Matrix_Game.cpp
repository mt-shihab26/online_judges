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
    int n, m;
    cin >> n >> m;
    vec<vec<int>> a(n + 1, vec<int>(m + 1));

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            cin >> a[i][j];
        }
    }

    vec<vec<int>> b(n + 1, vec<int>(m + 1));

    int i, j, k;

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= m; j++)
        {
            if (a[i][j] == 1)
            {
                for (k = 1; k <= m; k++)
                    b[i][k] = 1;
                for (k = 1; k <= n; k++)
                    b[k][j] = 1;
            }
        }
    }

    bool st = false;

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= m; j++)
        {
            if (b[i][j] == 0)
            {
                st = !st;
                for (k = 1; k <= m; k++)
                    b[i][k] = 1;
                for (k = 1; k <= n; k++)
                    b[k][j] = 1;
            }
        }
    }
    cout << (st ? "Ashish" : "Vivek") << ed;
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
// Wednesday, October 19, 2022 | 09:49:44 PM (+06)
