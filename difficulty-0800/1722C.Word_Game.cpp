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

    vec<str> s[3];
    map<str, int> mp;
    str tmp;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> tmp;
            mp[tmp]++;
            s[i].push_back(tmp);
        }
    }

    vec<int> ans(3);

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < n; j++)
        {
            int tmp = mp[s[i][j]];
            if (tmp == 1)
                ans[i] += 3;
            else if (tmp == 2)
                ans[i] += 1;
        }
    }

    for (int i = 0; i < 3; i++)
        cout << ans[i] << gp;
    cout << ed;

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
// Wednesday, August 31, 2022 | 12:38:48 PM (+06)
