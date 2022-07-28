#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define endn "\n"
#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

void test(void)
{
    lli n, x, t;
    cin >> n >> x >> t;
    lli z = t / x;
    if (z > n)
    {
        cout << (n - 1) * n / 2 << endn;
    }
    else
    {
        lli ans = z * n;
        ans -= z * (z + 1) / 2;
        cout << ans << endn;
    }
}

int main(void)
{
    fastio;
    int t;
    cin >> t;
    while (t--)
        test();
    return 0;
}
// Solved By: shihab4t
// Sunday, June 20, 2021 | 10:13:48 PM (+06)
