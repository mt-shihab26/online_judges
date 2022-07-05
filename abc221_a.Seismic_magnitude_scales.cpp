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

    int a, b;
    cin >> a >> b;

    int dif = a - b;

    cout << int(pow(32, dif)) << endn;

    return 0;
}
// Solved by: Shihab Mahamud (github.com/shihab4t)
