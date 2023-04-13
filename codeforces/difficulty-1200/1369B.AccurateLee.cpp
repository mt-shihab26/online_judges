#include <bits/stdc++.h>
using namespace std;

#define ed '\n'
#define gp ' '
#define ll long long int
#define vec vector
#define str string
#define xbe(x) x.begin(), x.end()

void solve()
{
    int n;
    cin >> n;
    str s;
    cin >> s;

    int last_zero = n, first_one = n;

    for (int i = n - 1; i >= 0; i--)
    {
        if (s[i] == '0')
        {
            last_zero = i;
            break;
        }
    }
    for (int i = last_zero - 1; i >= 0; i--)
    {
        if (s[i] == '1')
        {
            first_one = i;
        }
    }

    if (last_zero == n || first_one == n)
    {
        cout << s << ed;
        return;
    }

    for (int i = 0; i < first_one; i++)
    {
        cout << s[i];
    }
    cout << 0;
    for (int i = last_zero + 1; i < n; i++)
    {
        cout << s[i];
    }
    cout << ed;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cerr << boolalpha;
    cout << boolalpha;

    int t;
    cin >> t;
    while (t--)
        solve();

    return 0;
}

// github.com/p-nerd (Shihab Mahamud)
// Thursday, April 13, 2023 | 04:54:22 AM (+06)
