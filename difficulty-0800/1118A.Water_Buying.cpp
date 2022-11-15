#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define endn "\n"

void test(void) {
    lli n, a, b;
    cin >>n >>a >>b;
    lli cost; 
    if (a < b/2.0) {
        cost = a * n;
    }
    else {
        lli half_n = n / 2;
        if (n == 1) {
            cost = a;
        }
        else if (half_n*2 == n) {
            cost = half_n * b;
        }
        else {
            cost = half_n * b;
            cost += a;
        }
    }
    cout <<cost <<endn;
}

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    
    int t;
    cin >>t;
    while (t--) 
        test();
    
    return 0;
}
// Solved By: shh26b
// Tuesday, June 22, 2021 | 08:04:15 PM (+06)
