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
    int a, b, n, s;
    cin >> a >> b >> n >> s;

    int tmp = s / n;
    tmp = min(tmp, a) * n;
    tmp = tmp + b;

    if (tmp >= s)
        cout << "YES" << ed;
    else
        cout << "NO" << ed;

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
// Sunday, August 14, 2022 | 10:46:00 PM (+06)
