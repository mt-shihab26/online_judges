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

void solve()
{
    int n, m, x, y;
    cin >> n >> m >> x >> y;

    ll total = 0;
    vec<str> s(n);

    for (int i = 0; i < n; i++)
        cin >> s[i];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (s[i][j] == '.' && j + 1 < m && s[i][j + 1] == '.')
            {
                total += (ll)min(2 * x, y);
                j++;
            }
            else if (s[i][j] == '.')
                total += (ll)x;
        }
    }

    cout << total << ed;
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
// Monday, September 26, 2022 | 11:50:08 AM (+06)
