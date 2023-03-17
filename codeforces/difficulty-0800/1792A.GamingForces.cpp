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
    int n;
    cin >> n;
    vec<int> a(n);
    int ct1 = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] == 1)
        {
            ct1++;
        }
    }

    int ct = ceil(1.0 * ct1 / 2) + (n - ct1);
    cout << ct << ed;

    return 1;
}

// github.com/p-nerd (Shihab Mahamud)
//