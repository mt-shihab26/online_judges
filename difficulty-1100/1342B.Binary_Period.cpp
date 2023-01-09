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
    str t;
    cin >> t;

    int ct0 = count(t.begin(), t.end(), '0');
    int ct1 = count(t.begin(), t.end(), '1');

    if (ct0 == 0 || ct1 == 0)
    {
        cout << t << ed;
        return true;
    }

    int len = t.size();

    for (int i = 0; i < len; i++)
        cout << "10";
    cout << ed;

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
// github.com/p-nerd (Shihab Mahamud)
// Saturday, October 22, 2022 | 02:12:41 PM (+06)
