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
    int n;
    cin >> n;
    vec<int> a(n + 1);
    str s;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cin >> s;

    map<int, char> mp;

    for (int i = 0; i < n; i++)
    {
        if (!mp[a[i]])
        {
            mp[a[i]] = s[i];
        }
        else
        {
            if (mp[a[i]] != s[i])
            {
                cout << "NO" << ed;
                return true;
            }
        }
    }

    cout << "YES" << ed;

    return true;
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
// github.com/shh26b (Shihab Mahamud)
//