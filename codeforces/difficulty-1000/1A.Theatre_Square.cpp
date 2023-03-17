#include <bits/stdc++.h>
using namespace std;

typedef long long int llint;
#define endn "\n"

// Solve
int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    double n, m, a;
    cin >> n >> m >> a;

    llint count = ceil(n / a) * ceil(m / a);

    cout << count << endn;

    return 0;
}
// Solved By: p-nerd
// Thursday, July 08, 2021 | 08:04:23 AM (+06)
