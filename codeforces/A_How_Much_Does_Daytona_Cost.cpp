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
    int n, k, tmp;
    cin >> n >> k;
    bool is_found = false;

    while (n--)
    {
        cin >> tmp;
        is_found = is_found || tmp == k;
    }
    cout << (is_found ? "YES" : "NO") << "\n";
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

// developershihab.com (Portfolio)
// github.com/p-nerd (Code)
// Wednesday, November 01, 2023 | 12:03:44 AM (+06)
