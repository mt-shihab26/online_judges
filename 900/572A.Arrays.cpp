#include <bits/stdc++.h>
using namespace std;

typedef long long int lli;
#define endn "\n"



int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int nA, nB;
    cin >>nA >>nB;
    int A[nA+1], B[nB+1];
    int b = nB;
    int k, m;
    cin >>k >>m;
    int i;
    for (i = 1; i <= nA; i++) {
        cin >>A[i];
    }
    for (i = 1; i <= nB; i++) {
        cin >>B[i];
    }

    if (A[k] < B[b-m+1]) {
        cout <<"YES" <<endn;
    }
    else {
        cout <<"NO" <<endn;
    }

    return 0;
}
// Solved By: shihab4t
// Tuesday, June 29, 2021 | 12:51:46 AM (+06)
