#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define endn "\n"

void test(void) {
    int len, k;
    cin >>len >>k;  
    int j;
    for (int i = 0; i < len;) {
        for (j = 0; j < k and i < len; j++, i++) {
            cout <<((char)('a'+j));
        }
    }
    cout <<endn;
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
// Solved By: shihab4t
// Monday, June 21, 2021 | 01:51:47 AM (+06)
