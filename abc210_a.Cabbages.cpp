#include <bits/stdc++.h>
using namespace std;

typedef long long int llint;
#define endn "\n"

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    llint n, a, x, y;
    cin >> n >> a >> x >> y;

    llint result;
    result = min(a, n) * x;
    if (n > a)
        result += (n - a) * y;

    cout << result << endn;
}
// Solved By: shihab4t
// Sunday, July 18, 2021 | 01:50:09 AM (+06)
