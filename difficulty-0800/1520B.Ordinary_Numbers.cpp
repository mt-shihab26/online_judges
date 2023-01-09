#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define endn "\n"

void test(void) {
    lli n;
    cin >>n;
    lli ct = 0, temp;
    for (lli i = 1; i <= 9; i++) {
        temp = i;
        while (temp <= n) {
            ct++;
            temp = (temp * 10) + i;
        }
    }
    cout <<ct <<endn;
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
// Solved By: p-nerd
// Thursday, June 24, 2021 | 06:50:27 PM (+06)
