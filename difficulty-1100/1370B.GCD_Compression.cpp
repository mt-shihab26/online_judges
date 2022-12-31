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
    int n, i;
    cin >> n;
    vec<int> a(n * 2);
    vec<pair<int, int>> even, odd;

    for (i = 0; i < n * 2; i++)
    {
        cin >> a[i];
        if (a[i] % 2 == 0)
            even.push_back({a[i], i});
        else
            odd.push_back({a[i], i});
    }

    int x = n - 1;

    for (int i = 0, j = even.size() - 1; i < j && x > 0; i++, j--)
    {
        cout << even[i].second + 1 << gp << even[j].second + 1 << ed;
        x--;
    }

    for (int i = 0, j = odd.size() - 1; i < j && x > 0; i++, j--)
    {
        cout << odd[i].second + 1 << gp << odd[j].second + 1 << ed;
        x--;
    }
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
        solve();

    return 0;
}
// github.com/shihab4t (Shihab Mahamud)
// Wednesday, November 02, 2022 | 08:02:45 AM (+06)
