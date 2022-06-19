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
    double balance, withdraw;
    cin >>withdraw >>balance;
    if ((!(((int)withdraw) % 5)) && withdraw+0.50 <= balance) {
        balance = balance - withdraw - 0.50;;
    }
    cout <<fixed <<setprecision(2) <<balance <<endn;
}

int main(void)
{
    fastio;

    test();
    
    return 0;
}
// by: shihab4t
// Monday, June 14, 2021 | 03:16:42 AM (+06)
