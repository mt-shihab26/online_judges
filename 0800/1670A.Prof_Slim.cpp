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

/* -------------------- solution start -------------------- */

void solve()
{
    int n;
    cin >> n;
    vec<int> a(n);
    int negative_count = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] < 0)
        {
            negative_count++;
        }
    }

    int i;

    for (i = 0; i < negative_count; i++)
    {
        if (a[i] > 0)
        {
            a[i] *= -1;
        }
    }
    for (; i < n; i++)
    {
        if (a[i] <= 0) 
        {
            a[i] *= -1;
        }
    }

    bool is_yes = true;
    for (i = 1; i < n; i++) 
    {
        if (a[i-1] > a[i])
        {
            is_yes = false;
            break;
        }
    }
    
    cout << (is_yes ? "YES" : "NO") << endn;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    test_cases;

    return 0;
}
// Shihab Mahamud (github.com/shihab4t)
// Saturday, May 07, 2022 | 11:40:40 PM (+06)
