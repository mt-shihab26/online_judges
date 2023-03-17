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
    ll a, b;
    cin >> a >> b;

    if (a == b)
        return 0;

    if (a > b)
        swap(a, b);

    if (b % a != 0)
        return -1;

    ll dif = b / a, ct = 0;

    cerr << a << gp << b << " -> " << dif << ed;

    while (dif % 8 == 0)
    {
        ct++;
        dif /= 8;
    }
    while (dif % 4 == 0)
    {
        ct++;
        dif /= 4;
    }
    while (dif % 2 == 0)
    {
        ct++;
        dif /= 2;
    }

    if (dif != 1)
        return -1;

    return ct;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
        cout << solve() << ed;

    return 0;
}
// github.com/p-nerd (Shihab Mahamud) 2
// Wednesday, November 23, 2022 | 09:58:45 AM (+06)
