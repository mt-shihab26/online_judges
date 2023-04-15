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
    int n, x, y;
    cin >> n >> x >> y;

    vec<int> a(n), b(n);

    if (n == 2)
    {
        b[0] = x;
        b[1] = y;
    }
    else
    {
        b[n - 1] = INT_MAX;

        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                a[i] = x;
                a[j] = y;
                int diff = y - x;
                int d = j - i;
                if (diff % d == 0)
                {
                    diff /= d;
                    for (int k = i - 1; k >= 0; k--)
                        a[k] = a[k + 1] - diff;
                    for (int k = i + 1; k < n; k++)
                        a[k] = a[k - 1] + diff;
                    if (a[0] > 0 && a[n - 1] < b[n - 1])
                        b = a;
                }
            }
        }
    }

    for (auto i : b)
        cout << i << gp;
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
// Saturday, April 15, 2023 | 09:48:15 AM (+06)
