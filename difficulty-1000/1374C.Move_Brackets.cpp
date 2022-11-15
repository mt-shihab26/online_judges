#include <bits/stdc++.h>
using namespace std;

#define ed '\n'
#define gp ' '
#define lli long long int
#define vec vector
#define str string
#define all(x) x.begin(), x.end()

const int mod = 1e9 + 7;
const int inf = 1e9;

bool solve(int ti = 0)
{
    int n;
    cin >> n;
    string s;
    cin >> s;

    int ct = 0, mv = 0;

    for (int i = 0; i < n; i++)
    {
        if (s[i] == '(')
            ct++;
        else
        {
            if (ct > 0)
                ct--;
            else
            {
                s += ')';
                mv++;
                n++;
            }
        }
    }

    cout << mv << ed;

    return true;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t, ti;
    cin >> t;
    for (ti = 0; ti < t; ti++)
    {
        solve(ti);
    }

    return 0;
}
// github.com/shh26b (Shihab Mahamud)
// Saturday, July 30, 2022 | 11:30:41 PM (+06)
