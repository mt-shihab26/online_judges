#include <bits/stdc++.h>
using namespace std;

#define ed '\n'
#define gp ' '
#define ll long long int
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
    vec<int> a(n);
    int x = 0, y = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];

        if (a[i] % 2 == 0)
        {
            x += a[i];
        }
        else
        {
            y += a[i];
        }
    }

    if (x > y)
    {
        cout << "YES" << ed;
    }
    else
    {
        cout << "NO" << ed;
    }
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
// Thursday, April 20, 2023 | 01:10:17 PM (+06)
