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

    int n, m;
    cin >> n >> m;
    vec<int> a(n + 1);
    for (int i = 1; i <= n; i++)
        cin >> a[i];

    vec<int> cu(n + 1);
    map<int, bool> mp;

    int ct = 0;
    for (int i = n; i >= 1; i--)
    {
        if (mp[a[i]] == false)
        {
            ct++;
            mp[a[i]] = true;
        }
        cu[i] = ct;
    }

    int tmp;
    while (m--)
    {
        cin >> tmp;
        cout << cu[tmp] << ed;
    }

    return 0;
}
// github.com/shh26b (Shihab Mahamud)
// Saturday, September 03, 2022 | 03:46:56 AM (+06)
