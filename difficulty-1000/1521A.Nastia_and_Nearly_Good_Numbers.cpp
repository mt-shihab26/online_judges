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

bool solve(int ti = 0)
{
    ll a, b;
    cin >> a >> b;

    if (1 == b)
    {
        cout << "NO" << ed;
        return 0;
    }
    cout << "YES" << ed;
    cout << a * b << " " << a << " " << (a * b + a) << ed;
    return true;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t, ti;
    cin >> t;
    for (ti = 0; ti < t; ti++)
    {
        solve(ti);
    }

    return 0;
}
// github.com/shh26b (Shihab Mahamud)
// Thursday, August 11, 2022 | 11:15:56 AM (+06)
