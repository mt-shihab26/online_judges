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
    int n, tmp;
    cin >> n;
    vec<int> a(n);

    for (int i = 0; i < n; i++)
        cin >> a[i];

    vec<bool> b(n + 1, false);

    for (int i = 0; i < n; i++)
    {
        tmp = a[i];
        while (tmp)
        {
            if (1 <= tmp && tmp <= n)
            {
                if (b[tmp] == false)
                {
                    b[tmp] = true;
                    break;
                }
            }
            tmp /= 2;
        }
    }

    for (int i = 1; i <= n; i++)
    {
        // cerr << b[i] << gp;
        if (b[i] == false)
        {
            return false;
        }
    }
    // cerr << ed;

    return true;
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
// Friday, November 18, 2022 | 06:05:45 AM (+06)