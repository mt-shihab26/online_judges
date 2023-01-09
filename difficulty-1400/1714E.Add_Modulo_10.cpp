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

int is_possible(int x, int mx)
{
    if (x == mx)
        return true;
    vec<int> a;
    int _x = x;
    while (_x - x <= 20)
    {
        if (_x % 10 == 0)
            break;
        _x += (_x % 10);
        if (_x == mx)
            return true;
        a.push_back(_x);
    }
    for (int ith : a)
    {
        if (mx > ith && (mx - ith) % 20 == 0)
            return true;
    }
    return false;
}

bool solve(int ti = 0)
{
    int n, mx = INT_MIN;
    cin >> n;
    vec<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 == 1)
            a[i] += (a[i] % 10);
    }

    mx = *max_element(all(a));

    bool flag = true;
    for (int i = 0; i < n; i++)
    {
        if (is_possible(a[i], mx) == false)
        {
            flag = false;
            break;
        }
    }

    cout << (flag ? "Yes" : "No") << ed;

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
// github.com/p-nerd (Shihab Mahamud)
// Tuesday, August 02, 2022 | 06:42:41 AM (+06)
