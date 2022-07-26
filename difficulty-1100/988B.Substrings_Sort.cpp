#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define endn "\n"

void test(void) {
    int n;
    cin >>n;
    string str[n];
    map<int, int> len_indx;
    for (int i = 0; i < n; i++) {
        cin >>str[i];
    }

    int i, j;
    string temp;
    for (i = 0; i < n; i++) {
        for (j = i+1; j < n; j++) {
            if (str[i].length() < str[j].length()) {
                temp = str[i];
                str[i] = str[j];
                str[j] = temp;
            }
        }
        // cout <<str[i] <<endn;
    }

    for (i = 1; i < n; i++) {
        if (str[i-1].find(str[i]) == string::npos) {
            cout <<"NO"<<endn;
            return;
        }
    }

    cout <<"YES" <<endn;

    for (i = n-1; i >= 0; i--) {
        cout <<str[i] <<endn;
    }
}

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    
    
    test();
    
    return 0;
}
// Solved By: shihab4t
// Thursday, June 24, 2021 | 03:46:25 AM (+06)
