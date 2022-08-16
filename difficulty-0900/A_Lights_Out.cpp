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
    int g[5][5];
    int ans[5][5];

    for (int i = 1; i <= 3; i++)
        for (int j = 1; j <= 3; j++)
            cin >> g[i][j];

    ans[1][1] = g[1][1] + g[1][2] + g[2][1];
    ans[1][2] = g[1][1] + g[1][2] + g[1][3] + g[2][2];
    ans[1][3] = g[1][2] + g[1][3] + g[2][3];
    ans[2][1] = g[2][1] + g[2][2] + g[3][1];
    ans[2][2] = g[2][1] + g[2][2] + g[2][3] + g[1][2] + g[3][2];
    ans[2][2] = g[2][1] + g[2][2] + g[2][3] + g[1][2] + g[3][2];


    return true;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // int t;
    // cin >> t;
    // while (t--)
    solve();

    return 0;
}
// github.com/shihab4t (Shihab Mahamud)
// Tuesday, August 16, 2022 | 08:10:18 PM (+06)
