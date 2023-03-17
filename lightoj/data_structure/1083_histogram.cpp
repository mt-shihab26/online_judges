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

int solve()
{
    int n;
    cin >> n;
    vec<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int mx = 0;

    for (int i = 0; i < n; i++)
    {
        int ct = 0;
        for (int j = i; j < n; j++)
        {
            if (a[j] >= a[i])
                ct++;
            else
                break;
        }
        for (int j = i - 1; j >= 0; j--)
        {
            if (a[j] >= a[i])
                ct++;
            else
                break;
        }
        mx = max(mx, ct * a[i]);
    }
    cout << mx;

    return 1;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t, i = 1;
    cin >> t;
    while (t--)
    {
        cout << "Case " << i++ << ": ";
        solve();
        cout << ed;
    }

    return 0;
}
// github.com/shh26b (Shihab Mahamud)
// Thursday, December 15, 2022 | 11:20:02 PM (+06)
