#include <bits/stdc++.h>
using namespace std;

#define str string
#define vec vector
#define endn '\n'

void solve()
{
    str s;
    cin >> s;
    int n = s.length();
    int ct = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '1')
        {
            ct = 1;
        }
        else if (s[i] == '0')
        {
            ct++;
            break;
        }
        else
        {
            ct++;
        }
    }
    cout << ct << endn;
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
// Shihab Mahamud (github.com/shihab4t)
