#include <bits/stdc++.h>
using namespace std;

typedef long long int lli;
#define endn "\n"

void test(void) {
    int num;
    cin >>num;
    int rem = num % 2020;
    int mn = rem * 2021;
    if (mn > num) {
        cout <<"NO" <<endn;
    }
    else {
        cout <<"YES" <<endn;
    }
}

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    
    int t;
    cin >>t;
    while (t--) {
        test();
    }

    return 0;
}
// Solved By: shh26b
// Monday, June 28, 2021 | 10:09:22 PM (+06)
