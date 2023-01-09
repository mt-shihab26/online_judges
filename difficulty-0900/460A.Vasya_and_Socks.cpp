#include <bits/stdc++.h>
using namespace std;

typedef long long int lli;
#define endn "\n"

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    
    int n, m;
    cin >>n >>m;
    int i, j;
    for (i = 1, j = 1; n; i++) {
        if (i == m*j) {
            n++;
            j++;
        }
        n--;
    }

    cout<<i-1 <<endn;

    return 0;
}
// Solved By: p-nerd
// Monday, June 28, 2021 | 11:13:48 PM (+06)
