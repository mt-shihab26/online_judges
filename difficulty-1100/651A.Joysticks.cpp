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
    int x, y, ct = 0;
    cin >> x >> y;
    while (x > 0 && y > 0)
    {
        if (x == 1 && y == 1)
        {
            break;
        }

        if (x < y)
        {
            y -= 2;
            x++;
        }
        else
        {
            x -= 2;
            y++;
        }
        ct++;
    }

    cout << ct << ed;
    return true;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}
// github.com/shihab4t (Shihab Mahamud)
// Thursday, November 17, 2022 | 03:16:11 PM (+06)
