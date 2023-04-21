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
    int x, y;
    cin >> x >> y;

    cout << 2 << ed;
    cout << x - 1 << gp << 1 << ed;
    cout << x << gp << y << ed;
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
// Friday, April 21, 2023 | 11:43:51 AM (+06)
