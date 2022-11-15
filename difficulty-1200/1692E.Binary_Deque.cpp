#include <bits/stdc++.h>
using namespace std;

#define ed '\n'
#define gp ' '
#define i64 long long int
#define str string
#define vec vector
#define all(x) x.begin(), x.end()

bool solve()
{
    int n, s;
    cin >> n >> s;
    vec<int> a(n), prefix_sum(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        prefix_sum[i] = a[i];
        if (i)
            prefix_sum[i] += prefix_sum[i - 1];
    }

    for (int i = 0; i < n; i++)
    {
        cerr << prefix_sum[i] << " ";
    }
    cerr << ed;

    int ans = INT_MAX;

    for (int i = 0; i < n; i++)
    {
        int low = i, high = n - 1, other_point = -1;
        while (low <= high)
        {
            int mid = low + ((high - low) / 2);
            int mid_sum = prefix_sum[mid];
            int first_left = (i ? prefix_sum[i - 1] : 0);
            if (mid_sum - first_left <= s)
            {
                other_point = mid;
                low = mid + 1;
            }
            else
            {
                high = mid - 1;
            }
        }
        if (other_point != -1)
        {
            int mid_sum = prefix_sum[other_point];
            int first_left = (i ? prefix_sum[i - 1] : 0);
            if (mid_sum - first_left == s)
            {
                ans = min(ans, n - (other_point - (i - 1)));
            }
        }
    }

    cout << (ans == INT_MAX ? -1 : ans) << ed;

    return true;
}

bool test()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return true;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    test();

    return 0;
}
// Shihab Mahamud (github.com/shh26b)
// Thursday, June 16, 2022 | 03:59:01 PM (+06)
