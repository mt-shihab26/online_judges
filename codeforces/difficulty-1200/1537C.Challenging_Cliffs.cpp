#include <bits/stdc++.h>
using namespace std;

#define ed '\n'
#define gp ' '
#define ll long long int
#define vec vector
#define str string
#define xbe(x) x.begin(), x.end()

// 1 2 2 4
// 1 3 4 6
// 3 6 1 4

void solve()
{
    int n;
    cin >> n;
    vec<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    sort(xbe(a));

    int diff = INT_MAX;
    int mn_index = -1;
    for (int i = 1; i < n; i++)
    {
        if (a[i] - a[i - 1] < diff)
        {
            diff = a[i] - a[i - 1];
            mn_index = i;
        }
    }

    cout << a[mn_index - 1] << gp;
    for (int i = mn_index + 1; i < n; i++)
        cout << a[i] << gp;

    for (int i = 0; i < mn_index - 1; i++)
        cout << a[i] << gp;
    cout << a[mn_index] << gp;
    cout << ed;
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
// Saturday, April 15, 2023 | 11:36:55 AM (+06)
