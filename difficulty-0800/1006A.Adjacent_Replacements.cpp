#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define endn "\n"

void test(void) {
    int len;
    cin >>len;
    int temp;
    while (len--) {
        cin >>temp;
        cout <<(temp % 2 ? temp : temp-1) <<" ";
    }
}

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    
    test();
    
    return 0;
}
// Solved By: p-nerd
// Monday, June 21, 2021 | 12:30:14 AM (+06)
