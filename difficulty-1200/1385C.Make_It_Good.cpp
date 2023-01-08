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
    int n, i;
    cin >> n;
    vec<int> a(n);
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    if (n == 1)
    {
        cout << 0 << ed;
        return 1;
    }

    int p = n - 1;

    int ct = 0;
    if (a[p - 1] >= a[p])
    {
        ct++;
    }
    while (p >= 1 && a[p - 1] >= a[p])
    {
        p--;
        ct++;
    }
    if (n - 1 == p && a[p - 1] <= a[p])
    {
        ct++;
    }
    while (p >= 1 && a[p - 1] <= a[p])
    {
        p--;
        ct++;
    }
    cout << n - ct << ed;

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
// github.com/shihab4t (Shihab Mahamud)
// Sunday, January 08, 2023 | 11:24:39 AM (+06)
