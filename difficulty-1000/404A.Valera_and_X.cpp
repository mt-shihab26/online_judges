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

    int n;
    cin >> n;
    vec<str> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    char first = a[0][0];

    bool flag = true;

    for (int i = 0; i < n; i++)
    {
        if (a[i][i] != first)
        {
            flag = false;
            break;
        }
    }
    if (flag)
    {
        for (int i = 0, j = n - 1; i < n; i++, j--)
        {
            if (a[j][i] != first)
            {
                flag = false;
                break;
            }
        }
    }

    if (flag)
    {
        char second = a[0][1];
        int half = n / 2, ct = 0;
        for (int i = 0; i < n; i++)
        {
            ct = 0;
            for (int j = 0; j < n; j++)
            {
                if (a[i][j] == second)
                    ct++;
            }
            // cerr << i << ": " << ct << ed;
            if (half == i)
            {
                if ((n - ct) != 1)
                {
                    flag = false;
                    break;
                }
            }
            else
            {
                if (n - ct != 2)
                {
                    flag = false;
                    break;
                }
            }
        }
    }

    cout << (flag ? "YES" : "NO") << ed;
    return 0;
}
// github.com/shihab4t (Shihab Mahamud)
// Monday, August 22, 2022 | 06:09:55 AM (+06)
