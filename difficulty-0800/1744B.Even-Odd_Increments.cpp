#include <bits/stdc++.h>
using namespace std;

#define ed '\n'
#define gp ' '
#define ll long long int
#define int long long int
#define vec vector
#define str string
#define all(x) x.begin(), x.end()

const int mod = 1e9 + 7;
const int inf = 1e9;

bool solve()
{
    int n, q;
    cin >> n >> q;
    vec<int> a(n);
    int sum = 0, ct_even = 0, ct_odd = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        sum += a[i];
        if (a[i] % 2 == 0)
        {
            ct_even++;
        }
        else
        {
            ct_odd++;
        }
    }
    int t, x;
    while (q--)
    {
        cin >> t >> x;

        if (t == 0)
        {
            sum += (ct_even * x);

            if (x % 2 != 0)
            {
                ct_odd += ct_even;
                ct_even = 0;
            }
        }
        else
        {
            sum += (ct_odd * x);
            if (x % 2 == 1)
            {
                ct_even += ct_odd;
                ct_odd = 0;
            }

        }

        cout << sum << ed;
    }

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
// github.com/shh26b (Shihab Mahamud)
//