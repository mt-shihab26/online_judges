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

ll ad(ll a, ll digit)
{
    return (a * 10) + digit;
}

int solve()
{
    ll n;
    cin >> n;
    str s;
    cin >> s;

    ll a = -1, b = -1;
    str sa, sb;

    for (int i = 0; i < n; i++)
    {
        int x = s[i] - '0';

        if (x == 0)
        {
            if (i == 0)
            {
                sa.push_back('2');
                sb.push_back('1');
                if (a == -1)
                {
                    a = 2;
                    b = 1;
                }
            }
            else
            {
                sa.push_back('0');
                sb.push_back('0');
            }
        }
        else if (x == 1)
        {
            if (a < b)
            {
                sa.push_back('1');
                sb.push_back('0');
                if (a == -1)
                {
                    a = 1;
                    b = 0;
                }
            }
            else
            {
                sa.push_back('0');
                sb.push_back('1');
                if (a == -1)
                {
                    a = 0;
                    b = 1;
                }
            }
        }
        else
        {
            if (a == b)
            {
                sa.push_back('1');
                sb.push_back('1');
            }
            else if (a < b)
            {
                sa.push_back('2');
                sb.push_back('0');
                if (a == -1)
                {
                    a = 2;
                    b = 0;
                }
            }
            else
            {
                sa.push_back('0');
                sb.push_back('2');
                if (a == -1)
                {
                    a = 0;
                    b = 2;
                }
            }
        }
    }

    cout << sb << ed << sa << ed;

    return 1;
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
// github.com/shihab4t (Shihab Mahamud)
// Sunday, December 18, 2022 | 03:31:33 PM (+06)
