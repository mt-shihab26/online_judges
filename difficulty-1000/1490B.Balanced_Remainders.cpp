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

// 0 1 2

// 0 -> 1 - 1
// 0 -> 2 - 2

// 1 -> 2 - 1
// 1 -> 0 - 2

// 2 -> 0 - 1
// 2 -> 1 -> 2

bool solve()
{
    int n;
    cin >> n;
    vec<int> a(n);

    int c0 = 0, c1 = 0, c2 = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        a[i] %= 3;
        if (a[i] == 0)
            c0++;
        else if (a[i] == 1)
            c1++;
        else
            c2++;
    }
    int ans = -1, need = n / 3, rem, ct = 0;

    c0 -= need, c1 -= need, c2 -= need;

    cerr << c0 << gp << c1 << gp << c2 << ed;

    if (c0 < 0)
    {
        if (c2 > 0)
        {
            rem = min(-c0, c2);
            c0 += rem;
            c2 -= rem;
            ct += rem;
        }

        if (c0 < 0 && c1 > 0)
        {
            rem = min(-c0, c1);
            c0 += rem;
            c1 -= rem;
            ct += (rem * 2);
        }
    }

    if (c1 < 0)
    {
        if (c0 > 0)
        {
            rem = min(-c1, c0);
            c1 += rem;
            c0 -= rem;
            ct += rem;
        }
        if (c1 < 0 && c2 > 0)
        {
            rem = min(-c1, c2);
            c1 += rem;
            c2 -= rem;
            ct += (rem * 2);
        }
    }

    if (c2 < 0)
    {
        if (c1 > 0)
        {
            rem = min(-c2, c1);
            c2 += rem;
            c1 -= rem;
            ct += rem;
        }
        if (c2 < 0 && c0 > 0)
        {
            rem = min(-c2, c0);
            c2 += rem;
            c0 -= rem;
            ct += (rem * 2);
        }
    }

    cerr << c0 << gp << c1 << gp << c2 << ed << ed;

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
// github.com/shh26b (Shihab Mahamud)
// Tuesday, October 18, 2022 | 11:07:46 AM (+06)
