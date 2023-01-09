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
    for (int i = 0; i < n; i++)
        cin >> a[i];

    int mn = INT_MAX, ct = 0;
    for (int i = n - 1; i >= 0; i--)
    {
        if (a[i] > mn)
            ct++;
        mn = min(mn, a[i]);
    }
    cout << ct << ed;

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
// github.com/p-nerd (Shihab Mahamud)
// Wednesday, November 02, 2022 | 09:32:52 AM (+06)
