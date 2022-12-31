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

void solve()
{
    int n;
    cin >> n;
    int i = 2, ct = 0;
    vec<int> a;

    while (i * i <= n && ct < 2)
    {
        if (n % i == 0)
        {
            a.push_back(i);
            n /= i;
            ct++;
        }
        i++;
    }
    if (a.size() != 2)
    {
        cout << "NO" << ed;
        return;
    }
    if (n <= 1 || n == a[0] || n == a[1])
    {
        cout << "NO" << ed;
        return;
    }
    cout << "YES" << ed;
    cout << a[0] << gp << a[1] << gp << n << ed;
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
// Sunday, December 18, 2022 | 04:13:47 PM (+06)
