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

int linear_search(const vector<int> &arr, int x)
{
    int len = arr.size();
    for (int i = 0; i < len; i++)
    {
        if (arr[i] == x)
        {
            return i;
        }
    }
    return -1;
}

int solve()
{
    int n;
    cin >> n;
    vec<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int mx = INT_MIN;

    for (int s = 1; s <= 100; s++)
    {
        vec<int> x;
        for (int i = 0; i < n; i++)
        {
            x.push_back(a[i]);
        }
        int ct = 0;
        for (int i = 0; i < n; i++)
        {
            if (x[i] == -1)
                continue;
            int need = s - x[i];
            if (need < 1)
                continue;
            x[i] = -1;
            int p = linear_search(x, need);
            if (p == -1)
                continue;
            x[p] = -1;
            ct++;
        }
        mx = max(ct, mx);
    }
    cout << mx << ed;
    return 1;
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
// Saturday, January 07, 2023 | 11:21:40 AM (+06)
