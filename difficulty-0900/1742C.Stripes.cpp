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

void solve()
{
    str a[8];
    for (int i = 0; i < 8; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < 8; i++)
    {
        int ct = 0;
        for (int j = 0; j < 8; j++)
        {
            if (a[i][j] == 'R')
                ct++;
        }
        if (ct == 8)
        {
            cout << "R" << ed;
            return;
        }
    }

    for (int i = 0; i < 8; i++)
    {
        int ct = 0;
        for (int j = 0; j < 8; j++)
        {
            if (a[j][i] == 'B')
                ct++;
        }
        if (ct == 8)
        {
            cout << "B" << ed;
            return;
        }
    }
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}
// github.com/shh26b (Shihab Mahamud)
// Thursday, October 13, 2022 | 09:59:00 PM (+06)
