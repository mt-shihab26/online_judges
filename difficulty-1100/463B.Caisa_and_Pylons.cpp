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

bool solve()
{
    int n;
    cin >> n;
    vec<int> a(n);

    for (int i = 0; i < n; i++)
        cin >> a[i];

    int d = 0, e = 0;
    int x = 0, y;

    for (int i = 0; i < n; i++)
    {
        y = a[i];
        e = x - y + e;

        cerr << e << gp;

        if (e < 0)
        {
            d += (-e);
            e = 0;
        }

        x = a[i];
    }
    cerr << ed;

    cout << d << ed;

    return true;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}
// github.com/shh26b (Shihab Mahamud)
// Thursday, November 03, 2022 | 12:27:08 PM (+06)
