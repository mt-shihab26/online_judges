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

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, tmp, ct, ans = 0;
    cin >> n;

    vec<int> a(n + 1);

    for (int i = 1; i <= n; i++)
        cin >> a[i];

    for (int i = 1; i <= n; i++)
    {
        tmp = a[i], ct = 0;
        while (tmp >= 0)
            tmp = a[tmp], ct++;
        ans = max(ans, ct);
    }

    cout << ans + 1 << ed;

    return 0;
}
// github.com/shh26b (Shihab Mahamud)
// Friday, August 12, 2022 | 07:25:48 PM (+06)
