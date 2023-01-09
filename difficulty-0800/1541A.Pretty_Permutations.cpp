#include <bits/stdc++.h>
using namespace std;

typedef long long int lli;
#define endn "\n"

void test(void) {
    int n;
    cin >>n;
    if (n % 2) {
        for (int i = 2, j = 1; i <= n-3 and j <= n-3; i += 2, j += 2) {
            cout <<i <<" ";
            cout <<j <<" ";
        }
        cout <<n <<" " <<n-2 <<" " <<n-1 <<endn;
    }
    else {
        for (int i = 2, j = 1; i <= n and j <= n; i += 2, j += 2) {
            cout <<i <<" ";
            cout <<j <<" ";
        }
        cout << "\n";
    }
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
// Friday, June 25, 2021 | 09:39:35 PM (+06)
