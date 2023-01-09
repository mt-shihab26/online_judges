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
    int n;
    cin >> n;
    if (n % 2 == 1)
    {
        cout << 1 << gp;
        for (int i = 2; i <= n; i += 2)
        {
            cout << i + 1 << gp << i << gp;
        }
        cout << ed;
    }
    else
    {
        for (int i = 1; i <= n; i += 2)
        {
            cout << i + 1 << gp << i << gp;
        }
        cout << ed;
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
    {
        solve();
    }

    return 0;
}
// github.com/p-nerd (Shihab Mahamud)
//