#include <bits/stdc++.h>
using namespace std;

#define ed '\n'
#define gp ' '
#define vec vector
#define all(x) x.begin(), x.end()

using lli = long long int;
using str = string;

const int mod = 1e9 + 7;
const int inf = 1e9;

bool solve(int ti = 0)
{
    int n, m;
    cin >> n >> m;
    str tmp1, tmp2;
    int bl;
    map<str, pair<str, bool>> mp;
    while (m--)
    {

        cin >> tmp1 >> tmp2;
        bl = tmp1.length() <= tmp2.length();
        mp[tmp1] = {tmp2, bl};
    }

    while (n--)
    {
        cin >> tmp1;
        cout << (mp[tmp1].second ? tmp1 : mp[tmp1].first) << gp;
    }
    cout << ed;

    return true;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}
// github.com/shh26b (Shihab Mahamud)
// Friday, July 29, 2022 | 11:57:57 PM (+06)
