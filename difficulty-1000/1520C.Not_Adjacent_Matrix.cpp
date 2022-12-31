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

// 4
/*
1 2 3 4
5 6 7 8
9 10 11 12
13 14 15 16
*/

// 3
/*
1 8 3
4 2 6
7 5 9
*/

/*
1  14  3  16
5  10  7  12
9  6  11  8
13 2  15  4
*/

// 5
/*
1  12  3  4  5
6  17  8  9  10
11 22 13 14 15
16 7 18 19 20
21 2 23 24 25
*/

bool solve()
{
    int n;
    cin >> n;

    if (n == 2)
    {
        cout << -1 << ed;
        return true;
    }

    int a[n][n];

    for (int i = 0, k = 1; i < n; i++)
        for (int j = 0; j < n; j++)
            a[i][j] = k++;

    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 1)
        {
            for (int j = 0, k = n - 1; j < k; j++, k--)
                swap(a[j][i], a[k][i]);
            if (n % 2 == 1)
                swap(a[n / 2][i], a[0][i]);
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            cout << a[i][j] << gp;
        cout << ed;
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
// github.com/shihab4t (Shihab Mahamud)
// Thursday, September 15, 2022 | 01:04:20 AM (+06)
