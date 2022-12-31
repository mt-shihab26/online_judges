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
    int n, m, i, j, ct = 0;
    cin >> n;
    vec<int> b(n);
    for (i = 0; i < n; i++)
        cin >> b[i];

    cin >> m;
    vec<int> g(m);
    for (i = 0; i < m; i++)
        cin >> g[i];

    sort(b.begin(), b.end());
    sort(g.begin(), g.end());

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            if (abs(b[i] - g[j]) <= 1)
            {
                g[j] = 1000;
                ct++;
                break;
            }
        }
    }

    return ct;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cout << solve() << ed;

    return 0;
}
// github.com/shihab4t (Shihab Mahamud)
// Monday, December 12, 2022 | 06:17:44 AM (+06)
