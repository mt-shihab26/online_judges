#include <bits/stdc++.h>
using namespace std;

using lli = long long int;
using str = string;

#define vec vector
#define endn '\n'
#define first_io                      \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
#define file_io                       \
    freopen("input.txt", "r", stdin); \
    freopen("output.txt", "w", stdout);
#define test_cases \
    int t;         \
    cin >> t;      \
    while (t--)    \
        solve();

template <typename tp, typename tp2>
ostream &operator<<(ostream &ostream, const pair<tp, tp2> &p)
{
    return (ostream << p.first << " " << p.second);
}
template <typename tp>
ostream &operator<<(ostream &ostream, const vector<tp> &v)
{
    int len = v.size();
    for (int i = 0; i < len; i++)
        cout << v[i] << " ";
    return ostream;
}
template <typename tp>
ostream &operator<<(ostream &ostream, const set<tp> &s)
{
    for (auto ith : s)
        cout << ith << " ";
    return ostream;
}
template <typename tp>
istream &operator>>(istream &istream, vector<tp> &v)
{
    int len = v.size();
    for (int i = 0; i < len; i++)
        cin >> v[i];
    return istream;
}

int main()
{
    first_io;

    int n;
    cin >> n;
    vec<int> a(n);
    cin >> a;
    int fp = 0;
    int i = 0;
    for (; i < n - 1; i++)
    {
        if (a[i] >= a[i + 1])
        {
            fp = i;
            break;
        }
    }
    int sp = n - 1;
    if (i == n - 1)
    {
        fp = 0;
        sp = 0;
    }
    else
    {
        for (; i < n - 1; i++)
        {
            if (a[i] <= a[i + 1])
            {
                sp = i;
                break;
            }
        }
    }

    reverse(a.begin() + fp, a.begin() + sp + 1);

    bool is = false;
    for (int i = 0; i < n - 1; i++)
    {
        if (a[i] >= a[i + 1])
            is = true;
    }

    if (is)
        cout << "no" << endn;
    else
        cout << "yes" << endn << fp + 1 << " " << sp + 1 << endn;

    return 0;
}
// Shihab Mahamud (github.com/p-nerd)
// Wednesday, March 02, 2022 | 12:22:01 PM (+06)
