#include <bits/stdc++.h>
using namespace std;

#define ed '\n'
#define gp ' '
#define int long long int
#define vec vector
#define str string
#define all(x) x.begin(), x.end()

const int mod = 1e9 + 7;
const int inf = 1e9;

bool solve()
{
    int n, x;
    cin >> n >> x;

    vec<int> a(n);
    int sm = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        sm += a[i];
    }

    sort(a.begin(), a.end());

    int i = n, j = 0;

    while (j < n)
    {
        double tmp = 1.0 * sm / i;
        if (tmp >= x)
        {
            cout << i << ed;
            return true;
        }
        else
        {
            sm -= a[j];
            i--;
            j++;
        }
    }

    cout << 0 << ed;

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
// github.com/shihab4t (Shihab Mahamud)
// Wednesday, October 19, 2022 | 06:12:04 AM (+06)
