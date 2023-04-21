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

bool solve()
{
    int n;
    cin >> n;
    vec<int> c(n);
    for (int i = 0; i < n; i++)
        cin >> c[i];

    sort(xbe(c));

    if (c[0] != 1)
        return false;
    if (n > 1 && c[1] != 1)
        return false;

    int pre = 2;
    for (int i = 2; i < n; i++)
    {
        if (pre < c[i])
            return false;
        pre += c[i];
    }

    return true;
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
        cout << (solve() ? "YES" : "NO") << ed;

    return 0;
}

// github.com/p-nerd (Shihab Mahamud)
// Friday, April 21, 2023 | 07:47:15 AM (+06)
