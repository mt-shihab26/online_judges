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
    int n;
    cin >> n;

    for (int i = 1; i <= n + 1; i++)
    {
        for (int j = n - i + 1; j >= 1; j--)
            cout << gp << gp;
        for (int k = 0; k < i; k++)
        {
            cout << k;
            if (i != 1)
                cout << gp;
        }
        for (int m = i - 2; m >= 0; m--)
        {
            cout << m;
            if (m != 0)
                cout << gp;
        }
        cout << ed;
    }

    for (int i = n; i >= 1; i--)
    {
        for (int j = n - i + 1; j >= 1; j--)
            cout << gp << gp;
        for (int k = 0; k < i; k++)
        {
            cout << k;
            if (i != 1)
                cout << gp;
        }
        for (int m = i - 2; m >= 0; m--)
        {
            cout << m;
            if (m != 0)
                cout << gp;
        }
        cout << ed;
    }

    return true;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}
// github.com/p-nerd (Shihab Mahamud)
// Monday, October 10, 2022 | 07:41:54 PM (+06)
