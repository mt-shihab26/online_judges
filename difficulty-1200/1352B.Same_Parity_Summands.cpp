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
    int n, k, i, left;
    cin >> n >> k;
    bool flag = false;
    for (i = 1; i < 100000; i++)
    {
        if (i * k > n)
            break;

        left = n - (i * (k - 1));
        if (left % 2 == i % 2)
        {
            flag = true;
            break;
        }
    }
    if (flag)
    {
        cout << "YES" << ed;
        for (int y = 1; y < k; y++)
        {
            cout << i << gp;
        }
        cout << left << ed;
    }
    else
    {
        cout << "NO" << ed;
    }

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
// Thursday, December 15, 2022 | 10:08:31 PM (+06)
