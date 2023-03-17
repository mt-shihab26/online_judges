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

    int sq = sqrt(n);

    int ans = 1;

    vec<int> divisors;

    for (int i = 1; i <= sq; i++)
    {
        if (n % i == 0)
        {
            divisors.push_back(i);
            divisors.push_back(n / i);
        }
    }

    sort(all(divisors));

    // for (auto x : divisors)
    // {
    //     cerr << x << gp;
    // }
    // cerr << ed;

    auto it = upper_bound(all(divisors), k);
    it--;
    cout << n / *it << ed;

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
// github.com/p-nerd (Shihab Mahamud)
// Tuesday, January 03, 2023 | 01:03:14 PM (+06)
