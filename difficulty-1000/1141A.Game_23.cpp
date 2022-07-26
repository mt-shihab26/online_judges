#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define endn "\n"

void test(void) {
    lli n, m;
    cin >>n >>m;
    int moves = 0;
    if (m % n) {
        moves = -1;
    }
    else if (n == m) {
        moves = 0;
    }
    else {
        lli d = m / n;
        // cout <<d <<endn;
        while (not (d % 2))
            d /= 2, moves++;
        while (not (d % 3))
            d /= 3, moves++;
        if (d != 1)
            moves = -1;
    }
    cout <<moves <<endn;
}

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    
    
    test();
    
    return 0;
}
// Solved By: shihab4t
// Wednesday, June 23, 2021 | 12:43:28 AM (+06)
