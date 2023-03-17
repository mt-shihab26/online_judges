#include <bits/stdc++.h>
using namespace std;

#define int64 long long int

int64 bigmod(int64 a, int64 b, int64 m)
{
    if (b == 0)
        return 1;
    if (b == 1)
        return a % m;

    int64 res = bigmod(a, b / 2, m);
    res = (res * res) % m;

    if (b % 2 == 1)
        res = (res * (a % m)) % m;

    return res;
}

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int b, p, m;

    while (cin >> b >> p >> m)
    {
        cout << bigmod(b, p, m) << "\n";
    }

    return 0;
}
// Solved by: Shihab Mahamud (github.com/shihab4t)
// Wednesday, October 20, 2021 | 11:59:42 PM (+06)
