#include <bits/stdc++.h>
using namespace std;

#define ed '\n'
#define gp ' '
#define lli long long int
#define vec vector
#define str string
#define all(x) x.begin(), x.end()

bool solve()
{
    int n, tmp;
    cin >> n;

    vec<int> a;

    for (int i = 1; i <= n; i++)
        a.push_back(i);

    for (int i = 0, j = 1; i < n && j < n; i += 2, j += 2)
        swap(a[i], a[j]);

    if (n > 1 && n % 2 == 1)
        swap(a[n - 1], a[n - 2]);

    for (int i = 0; i < n; i++)
        cout << a[i] << gp;
    cout << ed;

    return true;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    // solve();

    return 0;
}
// github.com/p-nerd (Shihab Mahamud)
//