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

str mul(str a, int n)
{
    str res = "";
    for (int i = 0; i < n; i++)
    {
        res += a;
    }
    return res;
};

bool solve()
{

    str s1, s2;
    cin >> s1 >> s2;
    int n1 = s1.length();
    int n2 = s2.length();

    int lcm_res = (n1 * n2) / __gcd(n1, n2);

    str s1_res = mul(s1, lcm_res / n1);
    str s2_res = mul(s2, lcm_res / n2);

    if (s1_res == s2_res)
        cout << s1_res << ed;
    else
        cout << -1 << ed;

    return true;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
        solve();

    return 0;
}
// github.com/shihab4t (Shihab Mahamud)
// Sunday, September 25, 2022 | 10:41:25 AM (+06)
