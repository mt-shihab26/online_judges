#include <bits/stdc++.h>
using namespace std;

typedef long long int lli;
typedef unsigned long long int ulli;
#define endn "\n"

//Solve

void test(void) {
    int len;
    cin >>len;
    // int value[len*2];
    int evens = 0, odds = 0;
    int temp;
    for (int i = 1; i <= 2*len; i++) {
        cin >>temp;
        if (temp % 2) {
            odds++;
        }
        else {
            evens++;
        }
    }
    if (odds == evens) {
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
// Saturday, July 03, 2021 | 07:08:47 PM (+06)
