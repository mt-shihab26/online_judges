#include <bits/stdc++.h>
using namespace std;

#define ed '\n';

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m, tmp, l, r;
    cin >> n >> m;
    vector<int> a(n + 1);
    int mi = 0, ps = 0;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        if (a[i] == -1)
            mi++;
        else
            ps++;
    }

    int mn = min(mi, ps);

    while (m--)
    {
        cin >> l >> r;
        int len = r - l + 1;
        if (len % 2 == 0 && len <= 2 * mn)
        {
            cout << 1 << ed;
        }
        else
        {
            cout << 0 << ed;
        }
    }
}