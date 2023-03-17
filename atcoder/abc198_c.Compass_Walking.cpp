#include <bits/stdc++.h>
using namespace std;

#define endn '\n'
inline void first_io()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

int main(void)
{
    first_io();

    double r, x, y;

    cin >> r >> x >> y;

    double tmp = sqrt((x * x) + (y * y));

    if (r == tmp)
    {
        cout << 1 << endn;
    }
    else if (tmp <= r + r)
    {
        cout << 2 << endn;
    }
    else
    {
        cout << ceil(tmp / r) << endn;
    }

    return 0;
}
// Solved by: Shihab Mahamud (github.com/shihab4t)
