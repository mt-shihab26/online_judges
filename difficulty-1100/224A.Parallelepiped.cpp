#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
typedef long double ld;
#define endn "\n"
#define faststdio ios_base::sync_with_stdio(false);
#define fastcincout cin.tie(NULL); cout.tie(NULL);
#define fastio faststdio fastcincout

// Solve
void test(void) {
    double s1, s2, s3;
    cin >>s1 >>s2 >>s3;
    double a, b, c;
    a = sqrt(s1*s3/s2);
    b = sqrt(s1*s2/s3);
    c = sqrt(s2*s3/s1);
    cout <<4*(a+b+c) <<endn;
}

int main(void)
{
    fastio;

    test();
    
    return 0;
}
// by: shihab4t
// Monday, June 14, 2021 | 02:01:02 PM (+06)
