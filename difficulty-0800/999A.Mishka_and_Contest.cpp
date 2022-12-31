#include <bits/stdc++.h>
using namespace std;
//define
#define endn "\n"
#define fastio \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL); \
    cout.tie(NULL);

// Solve
void test(void) {
    int n, k, i;
    cin >>n >>k;
    int problems[n];
    for (i = 0; i < n; i++) cin >>problems[i];

    int ct = 0;
    int j, m;
    for (j = 0; j < n; j++) {
        if (problems[j] <= k) {
            ct++;
        }
        else {
            break;
        }
    }
    if (j != n) 
        for (m = n-1; m >= 0; m--) {
            if (problems[m] <= k) {
                ct++;
            }
            else {
                break;
            }
        }
    cout <<ct <<endn;
}

int main(void) {
    fastio;
    test();
    return 0;
}
// Solved By: shihab4t
// Sunday, June 20, 2021 | 01:17:07 AM (+06)
