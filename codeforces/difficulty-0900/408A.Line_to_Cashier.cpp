#include <bits/stdc++.h>
using namespace std;

#define ed '\n'
#define gp ' '
#define lli long long int
#define vec vector
#define str string

bool solve()
{
    int n;
    cin >> n;
    vec<int> k(n);
    for (int i = 0; i < n; i++)
        cin >> k[i];

    vec<vec<int>> m(n);

    int tmp;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < k[i]; j++)
        {
            cin >> tmp;
            m[i].push_back(tmp);
        }
    }

    int ct = 0, ans = INT_MAX;

    for (int i = 0; i < n; i++)
    {
        ct = k[i] * 15;
        for (int j = 0; j < k[i]; j++)
        {
            ct += m[i][j] * 5;
        }
        ans = min(ans, ct);
    }

    cout << ans << ed;

    return true;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}
// github.com/p-nerd (Shihab Mahamud)
// Sunday, July 17, 2022 | 02:04:27 PM (+06)
