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

bool solve(int ti = 0)
{
    int n;
    cin >> n;

    if (n <= 1)
        cout << -1 << ed;
    else
    {
        cout << 2;
        for (int i = 2; i <= n; i++)
            cout << 3;
        cout << ed;
    }

    return true;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t, ti;
    cin >> t;
    for (ti = 0; ti < t; ti++)
    {
        solve(ti);
    }

    return 0;
}
// github.com/shihab4t (Shihab Mahamud)
// Saturday, August 13, 2022 | 12:35:28 PM (+06)
