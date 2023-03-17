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

    // if (n == 1 and m == 3)
    // {
    //     cout << "BWB\n";
    //     return true;
    // }
    // else if (n == 3 and m == 1)
    // {
    //     cout << "B\nW\nB\n";
    //     return true;
    // }

    int i = 0, j = 1;
    cout << "W";
    for (int i = 0; i < n; i++)
    {
        for (; j < m; j++)
            cout << "B";
        cout << ed;
        j = 0;
    }
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
// Tuesday, August 16, 2022 | 03:46:05 AM (+06)
