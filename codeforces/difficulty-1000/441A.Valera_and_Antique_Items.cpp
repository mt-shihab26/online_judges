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

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n, v, k, tmp;
    cin >> n >> v;

    set<int> ans0;

    for (int i = 1; i <= n; i++)
    {
        cin >> k;
        for (int j = 1; j <= k; j++)
        {
            cin >> tmp;
            if (tmp < v)

                ans0.insert(i);
        }
    }

    vec<int> ans(all(ans0));

    sort(all(ans));
    int len = ans.size();
    cout << len << ed;
    for (int i = 0; i < len; i++)
        cout << ans[i] << gp;
    cout << ed;

    return 0;
}
// github.com/p-nerd (Shihab Mahamud)
// Monday, August 22, 2022 | 03:12:18 PM (+06)
