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

bool solve()
{
    int n;
    cin >> n;
    vec<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    for (int i = 1; i < n - 1; i++)
    {
        int first = a[i - 1], second = a[i], third = a[i + 1];
        a[i] = first;
        a[i + 1] = third + first - second;
    }

    for (int i = n - 2; i >= 1; i -= 2)
    {
        a[i] = a[n - 1];
        a[i - 1] = a[n - 1];
    }

    for (int i = 1; i < n; i++)
    {
        if (a[i - 1] > a[i])
        {
            return false;
        }
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
// Tuesday, April 25, 2023 | 01:51:44 PM (+06)
