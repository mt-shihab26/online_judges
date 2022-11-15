#include <bits/stdc++.h>
using namespace std;

#define ed '\n'
#define gp ' '
#define lli long long int
#define vec vector
#define str string
#define all(x) x.begin(), x.end()

bool solve()
{
    int tmp, one, two, i;
    vec<bool> a(5, false);

    cin >> tmp;

    a[tmp] = true;

    for (i = 1; i <= 3; i++)
    {
        cin >> one >> two;
        if (a[one] || a[two])
        {
            a[one] = !a[one];
            a[two] = !a[two];
        }
    }

    for (i = 1; i <= 3; i++)
    {
        if (a[i] == true)
        {
            cout << i << ed;
            break;
        }
    }

    return true;
}

/*
    0 1 0
    1 0 0
    0 1 0

    0 1 0
    0 1 0
*/

int32_t main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    solve();

    return 0;
}
// github.com/shh26b (Shihab Mahamud)
// Sunday, July 24, 2022 | 10:47:34 PM (+06)