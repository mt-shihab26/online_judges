#include <bits/stdc++.h>
using namespace std;

typedef long long int lli;
typedef unsigned long long int ulli;
#define endn "\n"

//Solve

void test(void) {
    int a1, b1, a2, b2;
    cin >>a1 >>b1;
    cin >>a2 >>b2;

    int max1 = max(a1, b1);
    int max2 = max(a2, b2);
    int min1 = min(a1, b1);
    int min2 = min(a2, b2);
    if (max1 == max2 and min1 + min2 == max1) {
        cout <<"Yes" <<endn;
    }
    else {
        cout <<"No" <<endn;
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
// Saturday, July 03, 2021 | 03:50:25 AM (+06)
