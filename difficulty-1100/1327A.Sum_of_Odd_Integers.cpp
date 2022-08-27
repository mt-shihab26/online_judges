#include <bits/stdc++.h>
using namespace std;

#define ed '\n'
#define gp ' '
#define int long long int
#define vec vector
#define str string
#define all(x) x.begin(), x.end()

const int mod = 1e9 + 7;
const int inf = 1e9;

bool solve()
{
    int n, k, tmp_k;
    cin >> n >> k;

    tmp_k = k;

    // 1 3 5 7
    k--;

    int tmp2 = 1 + ((k - 1) * 2);
    int tmp = 0;

    if (k == 1)
        tmp = 1;
    else if (k == 2)
        tmp = 4;
    else
        tmp = (1.0 * k / 2) * (2 + (1.0 * (k - 1) * 2));

    int tmp3 = n - tmp;

    cerr << tmp << gp << tmp2 << gp << tmp3 << ed;
    //  && tmp_k * tmp_k <= n

    if (tmp3 % 2 == 1 && tmp3 > tmp2)
    {
        cout << "YES" << ed;
    }
    else
    {
        cout << "NO" << ed;
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
// github.com/shihab4t (Shihab Mahamud)
// Saturday, August 27, 2022 | 05:43:53 AM (+06)
