#include <bits/stdc++.h>
using namespace std;

#define ed '\n'
#define gp ' '

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t, n, sum, tmp;
    cin >> t;
    while (t--)
    {
        cin >> n;
        sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> tmp;
            sum += tmp;
        }
        int ans = ceil(1.0 * sum / n);
        cout << ans << ed;
    }

    return 0;
}