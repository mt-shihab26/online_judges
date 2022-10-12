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
    vec<int> a(n + 1);
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    int cash25 = 0, cash50 = 0, cash100 = 0;

    for (int i = 1; i <= n; i++)
    {
        if (a[i] == 25)
        {
            cash25++;
            continue;
        }

        if (a[i] == 50)
        {
            if (cash25 >= 1)
            {
                cash25--;
                cash50++;
            }
            else
                return false;
            continue;
        }

        if (a[i] == 100)
        {
            if (cash50 >= 1 && cash25 >= 1)
            {
                cash25--;
                cash50--;
            }
            else if (cash25 >= 3)
                cash25 -= 3;
            else
                return false;
        }
    }

    return true;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cout << (solve() ? "YES" : "NO") << ed;

    return 0;
}
// github.com/shihab4t (Shihab Mahamud)
// Tuesday, October 11, 2022 | 07:07:07 PM (+06)
