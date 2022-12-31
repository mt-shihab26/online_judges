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
    int n, x;
    int ct_odd = 0, ct_even = 0;
    cin >> n >> x;
    vec<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] % 2 == 0)
            ct_even++;
        else
            ct_odd++;
    }
    cerr << ct_even << " " << ct_odd << ed;

    if (x % 2 == 0)
    {
        ct_odd = ct_odd % 2 == 0 ? ct_odd - 1 : ct_odd;
        ct_even = ct_even % 2 == 0 ? ct_even - 1 : ct_even;
        if (ct_odd > 0 && ct_even > 0 && ct_odd + ct_even >= x)
            cout << "Yes" << ed;
        else
            cout << "No" << ed;
    }
    else
    {
        ct_odd = ct_odd % 2 == 0 ? ct_odd - 1 : ct_odd;
        if (ct_odd > 0 && ct_odd + ct_even >= x)
            cout << "Yes" << ed;
        else
            cout << "No" << ed;
    }

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
// github.com/shihab4t (Shihab Mahamud)
// Thursday, December 15, 2022 | 09:16:14 PM (+06)
