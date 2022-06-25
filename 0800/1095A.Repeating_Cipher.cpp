#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define endn "\n"

void test(void) {
    int len;
    cin >> len;
    string en_str;
    cin >>en_str;
    int j = 0;
    int temp = 2;
    for (int i = 1; i <= len; ) {
        cout <<en_str[i-1];
        i += temp;
        temp++;
    }
}

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    
    
    test();
    
    return 0;
}
// Solved By: shihab4t
// Monday, June 21, 2021 | 02:10:20 AM (+06)
