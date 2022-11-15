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
    int n, m;
    cin >> n >> m;
    int rs = ceil(1.0 * n / 2);
    for (int i = rs; i <= n; i++)
    {
        if (i % m == 0)
        {
            cout << i << ed;
            return 0;
        }
    }
    cout << -1 << ed;
    return true;
}

/*
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1} -> 10
    {1, 1, 1, 1, 1, 1, 1, 1, 2} -> 9
    {1, 1, 1, 1, 1, 1, 2, 2} -> 8
    {1, 1, 1, 1, 2, 2, 2} -> 7
    {1, 1, 2, 2, 2, 2} -> 6
    {2, 2, 2, 2, 2} -> 5

    {1, 1, 1} -> 3
    {1, 2} -> 2
*/

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}
// github.com/shh26b (Shihab Mahamud)
// Friday, July 29, 2022 | 10:10:50 PM (+06)
