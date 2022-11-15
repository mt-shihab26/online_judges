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
const int inf = sqrt(1000000000);

int find(int low, int high, int n)
{
    int ans = 0;
    int pre = 0;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        int cart = (mid * ((3 * mid) + 1)) / 2;
        if (cart <= n)
        {
            ans = cart;
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
        // cerr << mid << " <-> " << cart << gp;
    }
    // cerr << ed;
    return ans;
}

bool solve()
{
    int n;
    cin >> n;

    int i = 0;
    while (n >= 2)
    {
        i++;
        int tmp = find(0, sqrt(n), n);
        n -= tmp;
    }
    cout << i << ed;

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
// Tuesday, October 18, 2022 | 09:19:38 AM (+06)
