#include <bits/stdc++.h>
using namespace std;

#define ed '\n'
#define gp ' '
#define int long long int
#define vec vector
#define str string
#define xbe(x) x.begin(), x.end()

template <typename T>
void print(ostream &stream, const vec<T> &v)
{
    for (const auto &e : v)
        stream << e << gp;
    stream << ed;
}

void solve()
{
    int n;
    cin >> n;
    vec<int> a(n), positive, negative, zeros;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] == 0)
            zeros.push_back(a[i]);
        else if (a[i] < 0)
            negative.push_back(a[i]);
        else
            positive.push_back(a[i]);
    }
    sort(xbe(a));

    int x = a[0] * a[1] * a[n - 1] * a[n - 2] * a[n - 3];
    int y = a[0] * a[1] * a[2] * a[3] * a[n - 1];
    int z = a[n - 1] * a[n - 2] * a[n - 3] * a[n - 4] * a[n - 5];

    int mx = max({x, y, z});
    cout << mx << ed;

    return;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cerr << boolalpha;
    cout << boolalpha;

    int t;
    cin >> t;
    while (t--)
        solve();

    return 0;
}

// github.com/p-nerd (Shihab Mahamud)
// Wednesday, April 19, 2023 | 11:51:45 AM (+06)
