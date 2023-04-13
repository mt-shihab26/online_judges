#include <bits/stdc++.h>
using namespace std;

#define ed '\n'
#define gp ' '
#define int long long int
#define vec vector
#define str string
#define xbe(x) x.begin(), x.end()

void solve()
{
    int n, k;
    cin >> n >> k;
    str s;
    cin >> s;
    map<char, bool> mp;
    for (int i = 0; i < k; i++)
    {
        char tmp;
        cin >> tmp;
        mp[tmp] = true;
    }

    int start = 0, ans = 0;

    for (int i = 0; i < n; i++)
    {
        if (mp[s[i]])
        {
            start++;
        }
        else
        {
            // cerr << start << gp;
            ans += start * (start + 1) / 2;
            start = 0;
        }
    }
    // cerr << ed;
    ans += start * (start + 1) / 2;

    cout << ans << ed;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cerr << boolalpha;
    cout << boolalpha;

    solve();

    return 0;
}

// github.com/p-nerd (Shihab Mahamud)
// Thursday, April 13, 2023 | 10:41:29 AM (+06)
