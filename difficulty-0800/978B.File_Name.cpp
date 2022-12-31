#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define endn "\n"

void test(void) {
    int len;
    cin >>len;
    char temp, pre_1, pre_2;
    cin >>pre_2 >>pre_1;
    len -= 2;
    int ct = 0;
    while (len--) {
        cin >>temp;
        if (pre_1 == 'x' and pre_2 == 'x' and temp == 'x') {
            ct++;
        }
        pre_2 = pre_1;
        pre_1 = temp;
    }
    cout <<ct <<endn;
}

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    
    
    test();
    
    return 0;
}
// Solved By: shihab4t
// Thursday, June 24, 2021 | 02:39:26 AM (+06)
