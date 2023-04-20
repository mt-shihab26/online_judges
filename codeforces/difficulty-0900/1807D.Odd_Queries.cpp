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

void solve()
{
    int n, q;
    cin >> n >> q;
    vec<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int l, r, k;

    vec<int> prefix(n);
    prefix[0] = a[0];
    for (int i = 1; i < n; i++)
    {
        prefix[i] = prefix[i - 1] + a[i];
    }
    while (q--)
    {
        cin >> l >> r >> k;
        l -= 1;
        r -= 1;

        int range_sum = (r - l + 1) * k;
        int before_range = l <= 0 ? 0 : prefix[l - 1];
        int after_range = prefix[n - 1] - prefix[r];
        int sum = range_sum + before_range + after_range;

        // cerr << sum << gp << range_sum << gp << before_range << gp << after_range << gp << prefix[n - 1] << gp << prefix[r] << ed;
        if (sum % 2 == 0)
        {
            cout << "NO" << ed;
        }
        else
        {
            cout << "YES" << ed;
        }
    }
    // cerr << ed;
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
// Thursday, April 20, 2023 | 01:32:43 PM (+06)
