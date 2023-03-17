#include <bits/stdc++.h>
using namespace std;

#define ed '\n'
#define gp ' '
#define ll long long int
#define vec vector
#define str string
#define xbe(x) x.begin(), x.end()

void solve()
{
    int n;
    cin >> n;
    vec<int> a(n);

    int mx = INT_MIN, mn = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        mx = max(mx, a[i]);
        mn = min(mn, a[i]);
    }
    int diff = mx - mn;

    if (diff == 0)
    {
        cout << (1LL * n * (n - 1LL)) << ed;
        return;
    }

    sort(xbe(a));

    // cerr << diff << ed;

    ll ct = 0;
    for (int i = 0; i < n; i++)
    {
        int left = diff + a[i];
        // cerr << a[i] << gp << left << gp;
        auto x = lower_bound(xbe(a), left);
        auto y = upper_bound(xbe(a), left);
        if (*x == left)
        {
            ct += (y - x);
        }
        left = a[i] - diff;
        // cerr << left << ed;

        if (left > 0)
        {
            auto x = lower_bound(xbe(a), left);
            auto y = upper_bound(xbe(a), left);
            if (*x == left)
            {
                ct += (y - x);
            }
        }
    }
    // cerr << ed;
    cout << ct << ed;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cerr << boolalpha;
    cout << boolalpha;

    int t;
    cin >> t;
    while (t--)
        solve();

    return 0;
}

// github.com/p-nerd (Shihab Mahamud)
// Friday, March 03, 2023 | 03:52:50 PM (+06)
