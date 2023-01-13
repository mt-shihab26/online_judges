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
    int n, i, j;
    cin >> n;
    vec<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    sort(all(a));

    vec<int> ans;

    for (i = 0, j = n - 1; i < j; i++, j--)
    {
        ans.push_back(a[i]);
        ans.push_back(a[j]);
    }
    if (n % 2 == 1)
        ans.push_back(a[i]);

    reverse(all(ans));

    for (int i = 0; i < n; i++)
        cout << ans[i] << gp;
    cout << ed;
    return 1;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cerr << boolalpha;
    cout << boolalpha;

    int t;
    cin >> t;
    while (t--)
        solve();

    return 0;
}
// github.com/p-nerd (Shihab Mahamud)
// Friday, January 13, 2023 | 07:38:49 AM (+06)
