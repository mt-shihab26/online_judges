#include <bits/stdc++.h>
using namespace std;

#define str string
#define vec vector
#define endn '\n'

void solve()
{
    int n, m;
    cin >> n >> m;
    int a[n][m];
    int l, o, i, j;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }

    int64_t mx = LLONG_MIN;

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            // cout << a[i][j] << " ";
            int64_t tmp = 0;
            for (l = j, o = i; l >= 0 && o >= 0; l--, o--)
            {
                tmp += a[o][l];
            }
            for (o = i + 1, l = j + 1; o < n && l < m; o++, l++)
            {
                tmp += a[o][l];
            }
            for (o = i - 1, l = j + 1; o >= 0 && l < m; o--, l++)
            {
                tmp += a[o][l];
            }
            for (o = i + 1, l = j - 1; o < n && l >= 0; o++, l--)
            {
                tmp += a[o][l];
            }

            mx = max(tmp, mx);
        }
        // cout << endn;
    }

    cout << mx << endn;
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
// Shihab Mahamud (github.com/shh26b)
