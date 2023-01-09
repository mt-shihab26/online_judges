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

int solve()
{
    int n;
    cin >> n;

    int last = 0, last2 = 0;

    for (int i = 1; (i + last) * 2 <= n; i += 2)
    {
        if ((i + last) * 2 == n)
            return true;
        if ((i * 4 + last2) == n)
            return true;
        last = i + last;
        last2 = last2 + (i * 4);
    }

    return false;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        cout << (solve() ? "YES" : "NO") << ed;
        // cerr << ed;
    }

    return 0;
}
// github.com/p-nerd (Shihab Mahamud)
// Wednesday, November 23, 2022 | 10:32:45 AM (+06)
