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
template <typename T>
ostream &operator<<(ostream &ostream, const set<T> &s)
{
    for (auto ith : s)
        cout << ith << " ";
    return ostream;
}
template <typename T>
ostream &operator<<(ostream &ostream, const vector<T> &v)
{
    for (auto ith : v)
        cout << ith << " ";
    return ostream;
}
template <typename T, typename T2>
ostream &operator<<(ostream &ostream, const pair<T, T2> &p)
{
    return (ostream << p.first << " " << p.second);
}
template <typename T, typename T2>
ostream &operator<<(ostream &ostream, const map<T, T2> &mp)
{
    for (auto ith : mp)
        cout << ith << "\n";
    return ostream;
}

#define str string
#define vec vector
#define endn '\n'
#define test_cases \
    int t;         \
    cin >> t;      \
    while (t--)    \
        solve();

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

    test_cases;

    return 0;
}
// Shihab Mahamud (github.com/shihab4t)
