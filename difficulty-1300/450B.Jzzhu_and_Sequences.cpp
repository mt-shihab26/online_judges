#include <bits/stdc++.h>
using namespace std;

#define ed '\n'
#define gp ' '
#define ll long long int
#define vec vector
#define str string
#define xbe(x) x.begin(), x.end()

const int mod = 1e9 + 7;

void solve()
{
    int a, b;
    cin >> a >> b;
    int n;
    cin >> n;

    int s[] = {
        a - b,
        a,
        b,
        b - a,
        -a,
        -b,
    };

    n %= 6;

    int ans = s[n] % mod;

    if (ans < 0)
        ans += mod;

    cout << ans << ed;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cerr << boolalpha;
    cout << boolalpha;

    solve();

    return 0;
}

// github.com/p-nerd (Shihab Mahamud)
// Monday, February 20, 2023 | 09:27:53 PM (+06)
