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
    int n, k;
    cin >> n >> k;

    if (n <= k)
    {
        cout << 1 << ed;
        return 1;
    }

    int ct = 1;
    int cl = 2;

    while (n > k)
    {
        ct *= 2;
        n /= 2;
    }
    cout << ct << ed;

    return 1;
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
// Tuesday, January 03, 2023 | 01:03:14 PM (+06)
