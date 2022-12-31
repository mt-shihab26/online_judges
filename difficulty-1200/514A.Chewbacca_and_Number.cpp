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

int solve()
{

    str s;
    cin >> s;

    int ln = s.length();

    int x = s[0] - '0';
    int y = 9 - x;

    cout << (y < x && y != 0 ? y : x);

    for (int i = 1; i < ln; i++)
    {
        x = s[i] - '0';
        y = 9 - x;
        cout << (y < x ? y : x);
    }
    cout << ed;

    return 1;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}
// github.com/shihab4t (Shihab Mahamud)
// Thursday, December 15, 2022 | 07:53:18 PM (+06)
