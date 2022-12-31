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

// Sheldon, Leonard, Penny, Rajesh, Howard, Sheldon, Sheldon, Leonard, Leonard, Penny, Penny
// 1 2 3 4 5 1 1 2 2 3  3  4  4  5  5  1  1  1  1  2  2  2  2  3  3  3  3  4  4  4  4  5  5  5  5
// 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30 31 32 33 34 35

// 10 - 5 = 5 / 2
// 25 - 5 = 20 - 10 = 10

// 1 1 1 1 2 2 2 2 3 3 3 3
// 10 / 4 -> ceil(10 / 4) = 3;

// 5 10 20 30 40 50 ....
// 1  2  4  8 16 32

// 20 -> 20 - 5 = 15 - 10 = ceil(5 / 4) = -> 2
// 15 -> 15 - 5 = 10 - 10 = 0 -> 5
// 35 -> 35 - 5 = 30 - 10 = 20 - 20 = 0 -> 5

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    int tm = 5;
    int d = 1;

    map<int, str> mp = {
        {1, "Sheldon"},
        {2, "Leonard"},
        {3, "Penny"},
        {4, "Rajesh"},
        {5, "Howard"}};

    while (tm <= n)
    {
        n -= tm;
        if (n == 0)
        {
            cout << mp[5] << ed;
            return 0;
        }
        tm *= 2;
        d *= 2;
    }

    int ans = ceil(1.0 * n / d);
    cout << mp[ans] << ed;

    return 0;
}
// github.com/shihab4t (Shihab Mahamud)
// Saturday, September 03, 2022 | 04:05:25 AM (+06)
