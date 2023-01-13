#include <bits/stdc++.h>
using namespace std;

#define ed '\n'
#define gp ' '
#define ll long long int
#define vec vector
#define str string
#define all(x) x.begin(), x.end()

const int mod = 1e9 + 7;
const int inf = 1e9;

bool solve()
{
    int n, i, pre = INT_MIN, j, one = 0, zero = 0;
    bool is_sorted = true, flag;
    vec<pair<int, int>> vp;

    cin >> n;
    vp.resize(n);
    for (i = 0; i < n; i++)
    {
        cin >> vp[i].first;
        if (pre > vp[i].first)
            is_sorted = false;
        pre = vp[i].first;
    }
    for (i = 0; i < n; i++)
    {
        cin >> vp[i].second;
        if (vp[i].second == 1)
            one++;
        else
            zero++;
    }
    if (is_sorted)
        return true;

    return one && zero;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cerr << boolalpha;
    cout << boolalpha;

    int t;
    cin >> t;
    while (t--)
        cout << (solve() ? "Yes" : "No") << ed;

    return 0;
}
// github.com/p-nerd (Shihab Mahamud)
//