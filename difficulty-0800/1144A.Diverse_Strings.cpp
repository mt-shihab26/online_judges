#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define endn "\n"

void test(void) {
    string str;
    cin >>str;

    sort(str.begin(), str.end());

    bool flag = true;
    for (int i = 0; i < str.length()-1; i++) {
        if (str[i+1] - str[i] != 1) {
            flag = false;
            break;
        }
    }
    cout <<(flag ? "Yes" : "No") <<endn;
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
// Wednesday, June 23, 2021 | 01:13:00 AM (+06)
