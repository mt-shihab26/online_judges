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
    int n;
    cin >> n;
    vec<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    ll ans = 0;
    for (int i = 0; i < n;)
    {
        int tmn = INT_MIN, tmx = INT_MIN;
        bool flag = a[i] < 0;

        while (a[i] < 0 && i < n)
        {
            tmn = max(tmn, a[i]);
            // cerr << a[i] << " ";
            i++;
        }
        while (a[i] > 0 && flag == false && i < n)
        {
            tmx = max(tmx, a[i]);
            // cerr << a[i] << " ";
            i++;
        }
        if (flag)
        {
            ans += tmn;
            // cerr << " -> " << tmn << " <- ";
        }
        else
        {
            ans += tmx;
            // cerr << " -> " << tmx << " <- ";
        }
    }
    // cerr << ed;
    cout << ans << ed;

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
// Thursday, December 15, 2022 | 06:45:21 PM (+06)
