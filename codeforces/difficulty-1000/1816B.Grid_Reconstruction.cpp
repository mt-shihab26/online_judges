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

    vec<vec<int>> v(2, vec<int>(n));

    v[0][0] = 2 * n;
    v[1][n - 1] = (2 * n) - 1;

    int x = 1, y = (2 * n) - 2;
    for (int i = 1; i < n; i++)
    {
        int t = i % 2 == 1 ? x + 1 : y;
        int b = i % 2 == 1 ? x : y - 1;

        x = i % 2 == 1 ? x + 2 : x;
        y = i % 2 == 1 ? y : y - 2;

        v[0][i] = t;
        v[1][i - 1] = b;
    }

    for (auto x : v)
    {
        print(cout, x);
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
// Friday, April 21, 2023 | 12:24:16 PM (+06)
