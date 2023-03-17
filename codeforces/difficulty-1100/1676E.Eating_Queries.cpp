#include <bits/stdc++.h>
using namespace std;

template <typename T>
istream &operator>>(istream &istream, vector<T> &v)
{
    int len = v.size();
    for (int i = 0; i < len; i++)
        cin >> v[i];
    return istream;
}

#define str string
#define vec vector
#define endn '\n'
#define test_cases

void solve()
{
    int n, q;
    cin >> n >> q;
    vector<int> a(n);
    vector<int> x(q);

    cin >> a >> x;

    sort(a.begin(), a.end(), [](int a, int b)
         { return a > b; });

    int64_t tmp = 0;
    vector<int> xx;
    for (int i = 0; i < n; i++)
    {
        tmp += a[i];
        xx.push_back(tmp);
    }

    for (int i = 0; i < q; i++)
    {
        auto tmp = lower_bound(xx.begin(), xx.end(), x[i]);

        if (tmp == xx.end())
            cout << -1 << endn;
        else
            cout << (tmp - xx.begin()) + 1 << endn;
    }
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
// Shihab Mahamud (github.com/p-nerd)
