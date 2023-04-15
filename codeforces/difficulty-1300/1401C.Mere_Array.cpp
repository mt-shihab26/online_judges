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
    int n, mn = INT_MAX;
    cin >> n;
    vec<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        mn = min(a[i], mn);
    }

    vec<int> devisable;
    for (int i = 0; i < n; i++)
    {
        if (__gcd(a[i], mn) == mn)
        {
            devisable.push_back(a[i]);
            a[i] = -1;
        }
    }

    sort(xbe(devisable));

    int j = 0;

    for (int i = 0; i < n; i++)
    {
        if (a[i] == -1)
        {
            a[i] = devisable[j];
            j++;
        }
    }

    bool flag = true;
    for (int i = 1; i < n; i++)
    {
        if (a[i - 1] > a[i])
        {
            flag = false;
        }
    }

    cout << (flag ? "YES" : "NO") << ed;
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
// Saturday, April 15, 2023 | 09:24:31 AM (+06)
