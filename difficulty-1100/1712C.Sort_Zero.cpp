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
    map<int, int> mp;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        if (mp[a[i]] == 0)
            mp[a[i]] = i;
    }

    int index = 0;
    for (int i = n; i >= 2; i--)
        if (a[i - 1] > a[i])
        {
            index = i - 1;
            break;
        }

    int ans = mp.size();
    set<int> saved;

    for (int i = n; i >= index + 1; i--)
    {
        if (mp[a[i]] <= index)
            break;
        saved.insert(a[i]);
    }

    ans -= saved.size();

    cout << ans << ed;
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
// github.com/shihab4t (Shihab Mahamud)
//