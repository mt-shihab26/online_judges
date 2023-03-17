#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define endn "\n"

void test(void) {
    lli l,r,x,y;
    cin >>l >>r >>x >>y;
    cout <<l <<" ";
    if(l==x) cout <<x+1 <<endl;
    else cout <<x <<endl;
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
// Tuesday, June 22, 2021 | 05:39:47 PM (+06)
