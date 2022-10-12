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
    vec<int> a(n + 1);
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    sort(a.begin(), a.end());

    for (int i = 3; i <= n; i++)
    {
        if (a[i - 2] + a[i - 1] > a[i] && a[i - 2] + a[i] > a[i - 1] && a[i - 1] + a[i] > a[i - 2])
        {
            cout << "YES" << ed;
            return true;
        }
    }

    cout << "NO" << ed;
    return true;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}
// github.com/shihab4t (Shihab Mahamud)
// Tuesday, October 11, 2022 | 06:58:09 PM (+06)
