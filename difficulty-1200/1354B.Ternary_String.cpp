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

int solve()
{
    str s;
    cin >> s;
    int ln = s.size(), a = -1;
    vec<pair<char, int>> v;
    set<char> st;
    for (int i = 0; i < ln; i++)
    {
        st.insert(s[i]);
        if (a == -1 || v[a].first != s[i])
        {
            v.push_back({s[i], 1});
            a++;
        }
        else
        {
            v[a].second++;
        }
    }

    if (st.size() < 3)
    {
        cout << 0 << ed;
        return 1;
    }

    int ln2 = v.size();
    int mn = INT_MAX;
    for (int i = 1; i < ln2 - 1; i++)
    {
        if (v[i - 1].first != v[i + 1].first)
        {
            mn = min(mn, v[i].second + 2);
        }
    }

    cout << mn << ed;

    return 1;
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
// github.com/shihab4t (Shihab Mahamud)
// Thursday, January 05, 2023 | 12:05:59 PM (+06)
