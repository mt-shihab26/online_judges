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

    int n, k;
    cin >> n >> k;

    vec<int> a(n + 1, 0);
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        a[i] = a[i - 1] + a[i];
    }

    int ans = INT_MAX, index = 0;
    for (int i = 1, j = k; i <= n && j <= n; i++, j++)
    {
        int tmp = a[j] - a[i - 1];
        if (ans > tmp)
        {
            index = i;
            ans = min(ans, tmp);
        }
    }
    cout << index << ed;

    return 0;
}
// github.com/shihab4t (Shihab Mahamud)
// Thursday, August 25, 2022 | 05:55:39 AM (+06)
