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

    double x;
    cin >> x;

    int xi = x;

    if (x - xi >= 0.500)
    {
        xi++;
    }

    cout << xi << endn;

    return 0;
}
// Solved by: Shihab Mahamud (github.com/shihab4t)
// Friday, November 12, 2021 | 09:22:24 AM (+06)
