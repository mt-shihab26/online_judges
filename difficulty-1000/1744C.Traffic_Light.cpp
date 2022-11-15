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
    char c;
    cin >> n >> c;
    str s;
    cin >> s;

    s += s;

    int start = 0, mx = INT_MIN;
    int first_g = -1, last_c, last_g;

    if (c == 'g')
    {
        cout << 0 << ed;
        return 0;
    }

    n = s.size();

    for (int i = 0; i < n; i++)
    {
        if (s[i] == c)
        {
            int ct = 0;
            while (s[i] != 'g' && i < n)
            {
                ct++;
                i++;
            }
            mx = max(mx, ct);
        }
    }

    cout << mx << ed;

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