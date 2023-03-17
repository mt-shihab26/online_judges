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
    int n, k;
    cin >> n >> k;
    vec<int> a(k);
    for (int i = 0; i < k; i++)
    {
        cin >> a[i];
    }

    sort(a.begin(), a.end(), greater<int>());

    int p = 0, ct = 0;
    for (int i = 0; i < k; i++)
    {
        if (p < a[i])
        {
            p += (n - a[i]);
            ct++;
        }
        else
            break;
    }
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
// github.com/p-nerd (Shihab Mahamud)
// Monday, November 14, 2022 | 01:00:23 PM (+06)
