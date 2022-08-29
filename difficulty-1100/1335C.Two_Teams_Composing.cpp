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
    vec<int> a(n);
    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        mp[a[i]]++;
    }

    set<int> as(a.begin(), a.end());

    int mx_ele = mp.begin()->first, mx_size = mp.begin()->second;

    for (auto ith : mp)
    {
        if (ith.second > mx_size)
        {
            mx_ele = ith.first;
            mx_size = ith.second;
        }
    }

    int first = as.size() - 1;
    int second = mx_size;

    if (second > first)
    {
        first++;
        second--;
    }

    int ans = min(first, second);

    cout << ans << ed;
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
// Sunday, August 28, 2022 | 05:55:44 PM (+06)
