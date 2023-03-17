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

/* --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- */

#define ed '\n'
#define gp ' '
#define i64 long long int
#define str string
#define vec vector

bool solve()
{
    int n, k, i;
    cin >> n >> k;
    vec<int> a(n);
    cin >> a;

    deque<int> dq(k);

    for (i = 0; i < k; i++)
    {
        while ((!dq.empty()) && a[dq.back()] <= a[i])
            dq.pop_back();
        dq.push_back(i);
    }

    for (; i < n; i++)
    {
        cout << a[dq.front()] << " ";

        while ((!dq.empty()) && dq.front() <= i - k)
            dq.pop_front();

        while ((!dq.empty()) && a[dq.back()] <= a[i])
            dq.pop_back();
        dq.push_back(i);
    }

    cout << a[dq.front()] << ed;

    return true;
}

bool test()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return true;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    test();

    return 0;
}
// Shihab Mahamud (github.com/shihab4t)