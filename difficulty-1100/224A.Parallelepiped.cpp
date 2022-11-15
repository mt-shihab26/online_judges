#include <bits/stdc++.h>
using namespace std;

#define endn "\n"

int main(void)
{
    ios_base::sync_with_stdio(false);
    cout.tie(NULL);

    double s1, s2, s3;
    cin >> s1 >> s2 >> s3;
    double a, b, c;
    a = sqrt(s1 * s3 / s2);
    b = sqrt(s1 * s2 / s3);
    c = sqrt(s2 * s3 / s1);
    cout << 4 * (a + b + c) << endn;

    return 0;
}
// by: shh26b
// Monday, June 14, 2021 | 02:01:02 PM (+06)
