#include <bits/stdc++.h>
using namespace std;

typedef long long int lli;
#define endn "\n"

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    
    int n, k;
    string s_k;
    cin >>n >>s_k;
    k = s_k.length();
    int last = n % k ? n%k : k;

    // cout <<last <<endn;

    lli ans = 1;
    while (n >= last) {
        ans = ans * n;
        n -= k;
    }

    cout <<ans <<endn;

    return 0;
}
// Solved By: shihab4t
// Sunday, June 27, 2021 | 12:42:03 AM (+06)
