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

bool solve()
{
    int m, s;
    cin >> m >> s;

    vec<int> a(m);
    for (int i = 0; i < m; i++)
    {
        cin >> a[i];
    }

    int mx = *max_element(a.begin(), a.end());

    sort(a.begin(), a.end());

    for (int i = 1, j = 0; i <= mx && j < m; i++)
    {
        if (a[j] == i)
        {
            j++;
        }
        else
        {
            s -= i;
        }
    }

    while (s > mx)
    {
        mx++;
        s -= mx;
    }

    if (s == 0)
    {
        cout << "YES" << ed;
    }
    else
    {
        cout << "NO" << ed;
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