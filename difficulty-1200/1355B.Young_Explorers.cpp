#include <bits/stdc++.h>
using namespace std;

#define ed '\n'
#define gp ' '
#define ll long long int
#define vec vector
#define str string
#define all(x) x.begin(), x.end()

const int
    mod = 1e9 + 7,
    inf = 1e9;

int solve();

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

int solve()
{
    // 1 2 2 2 3
    // 1 2 2
    int n;
    cin >> n;
    vec<int> a(n + 1);
    map<int, int> oc;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        oc[a[i]]++;
    }

    sort(all(a));

    int x = 1, ct = 0;

    for (int i = 1; i <= n; i++)
    {
        if (x >= a[i])
        {
            ct++;
            x = 1;
        }
        else
        {
            x++;
        }
    }

    cout << ct << ed;

    return 1;
}

// github.com/p-nerd (Shihab Mahamud)
// Wednesday, February 08, 2023 | 01:53:58 AM (+06)
