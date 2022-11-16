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

    vec<int> a(n);
    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        mp[a[i]] = i;
    }

    sort(a.begin(), a.end());

    int ct = 1;
    int indx = mp[a[0]];
    for (int i = 1; i < n; i++)
    {
        if (indx + 1 != mp[a[i]])
            ct++;
        indx = mp[a[i]];
    }

    if (ct <= k)
        cout << "Yes" << ed;
    else
        cout << "No" << ed;

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
// Wednesday, November 16, 2022 | 09:02:25 AM (+06)
