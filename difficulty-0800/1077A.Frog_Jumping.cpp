#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define endn "\n"

void test(void) {
    lli a, b, k;
    cin >> a >>b >>k;
    lli ans;
    if (k % 2) {
        ans = (k/2+1) * a;
        ans -= ((k/2) * b);
    }
    else {
        ans = k/2 * a;
        ans -= k/2 * b;
    }
        cout << ans <<endn;
   
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
// Solved By: shihab4t
// Monday, June 21, 2021 | 01:34:23 AM (+06)
