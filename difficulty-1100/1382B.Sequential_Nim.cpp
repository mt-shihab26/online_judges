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

// 2 5 4
// 1 -> 1
// 1 -> 2
// 4 -> 1
// 1 -> 2
// 4 -> 1

// 1 -> 1
// 1 -> 2
// 1 -> 1
// 1 -> 2
// 1 -> 1
// 1 -> 2
// 1 -> 1
// 1 -> 2

// 6
// 1 1 1 1 1 1 1 2

bool solve()
{
    int n;
    cin >> n;

    vec<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    bool st = false;
    int i;

    for (i = 0; i < n; i++)
    {
        if (a[i] == 1)
            st = !st;
        else
            break;
    }
    if (i == n)
    {
        cout << (st ? "First" : "Second") << ed;
        return true;
    }
    cout << (st ? "Second" : "First") << ed;
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
// Wednesday, October 19, 2022 | 02:12:20 PM (+06)
