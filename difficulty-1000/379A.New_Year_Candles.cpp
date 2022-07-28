#include <bits/stdc++.h>
using namespace std;

#define ed '\n'
#define gp ' '
#define lli long long int
#define vec vector
#define str string
#define all(x) x.begin(), x.end()

const int mod = 1e9 + 7;

bool solve(int ti = 0)
{
    int a, b;
    cin >> a >> b;

    int hour = 0, candle = a, curr = 0;

    while (candle)
    {
        candle--;
        curr++;
        hour++;
        if (curr >= b)
        {
            candle++;
            curr -= b;
        }
    }

    cout << hour << ed;

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
// Thursday, July 28, 2022 | 05:39:35 PM (+06)
