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

ll map_new(ll a)
{
    ll new_a = 0;
    ll i = 1;
    while (a)
    {
        if (a % 10 != 0)
        {
            new_a = new_a + ((a % 10) * i);
            i *= 10;
        }
        a /= 10;
    }
    return new_a;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll a, b;
    cin >> a >> b;

    ll pre = a + b;

    ll new_a = map_new(a);
    ll new_b = map_new(b);
    ll new_pre = map_new(pre);

    ll now = new_a + new_b;

    cout << (new_pre == now ? "YES" : "NO") << ed;
    return 0;
}
// github.com/p-nerd (Shihab Mahamud)
// Saturday, August 20, 2022 | 12:21:39 PM (+06)
