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
    str s1, s2;
    cin >> s1 >> s2;

    for (int i = 0; i < n; i++)
    {
        if (s1[i] == 'G')
            s1[i] = 'B';
        if (s2[i] == 'G')
            s2[i] = 'B';
    }

    for (int i = 0; i < n; i++)
    {
        if (s1[i] != s2[i])
        {
            cout << "NO" << ed;
            return true;
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
// github.com/p-nerd (Shihab Mahamud)
// Wednesday, August 31, 2022 | 12:32:18 PM (+06)
