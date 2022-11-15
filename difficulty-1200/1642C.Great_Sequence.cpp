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

void solve()
{
    int n, x;
    cin >> n >> x;
    vec<int> a(n);
    cin >> a;
    sort(a.begin(), a.end());

    // cout << a << endn;

    lli target;
    int ft, low, high, mid, ans = 0;

    for (int i = 0; i < n; i++)
    {
        if (a[i] != -1)
        {
            ft = -1;
            target = 1ll * a[i] * x;
            low = i + 1, high = n - 1, mid;
            while (low <= high)
            {
                mid = low + ((high - low) / 2);
                if (a[mid] == target)
                {
                    ft = mid;
                    high = mid - 1;
                }
                else if (a[mid] > target)
                {
                    high = mid - 1;
                }
                else
                {
                    low = mid + 1;
                }
            }
            if (ft == -1)
            {
                ans++;
            }
            else
            {
                a[ft] = -1;
            }
        }
    }
    // cout << a << endn;
    cout << ans << endn;
}

int main()
{
    first_io;

    test_cases;

    return 0;
}
// Shihab Mahamud (github.com/shh26b)
// Thursday, February 24, 2022 | 06:32:20 AM (+06)
