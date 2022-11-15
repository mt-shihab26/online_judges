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
    int n, k;
    cin >> n >> k;

    // if ((n + k) * (n - 1) < 4)
    // {
    //     cout << "NO" << ed;
    // }
    // else
    // {
    //     cout << "YES" << ed;
    vec<pair<int, int>> ans;
    for (int i = 1; i <= n; i += 2)
    {
        if (((i + k) * (i + 1)) % 4 == 0)
        {
            ans.push_back({i, i + 1});
        }
        else if ((((i + 1) + k) * i) % 4 == 0)
        {
            ans.push_back({i + 1, i});
        }
    }
    if (ans.size() == (n / 2))
    {
        cout << "YES" << ed;
        for (auto it : ans)
        {
            cout << it.first << gp << it.second << ed;
        }
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
// github.com/shh26b (Shihab Mahamud)
//