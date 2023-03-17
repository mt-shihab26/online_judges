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
    lli n, t, tmp;
    cin >> n >> t;

    str s = "", c = to_string(t);

    if (t == 10)
        c = '1';

    tmp = n;
    while (tmp--)
        s += c;

    if (t == 10)
        s[s.length() - 1] = '0';

    if (s.length() > n || (n == 1 && t == 10))
        cout << -1 << ed;
    else
        cout << s << ed;

    return true;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}
// github.com/p-nerd (Shihab Mahamud)
// Thursday, July 28, 2022 | 10:23:23 PM (+06)
