#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
typedef long double ld;
#define endn "\n"

void test(void) {
    int n;
    cin >> n;
    int temp;
    bool flag = false;
    for (int i = 0; i < n; i++) {
        cin >> temp;
        if (temp < 0) {
            flag = true;
        }
    }

    if (flag) {
        cout << "NO" << endn;
    }
    else {
        cout << "YES" << endn;
        cout << 101 << endn;
        for (int i = 0; i <= 100; i++) {
            cout << i << " ";
        }
        cout << endn;
    }
    
}   

int main(void) {
    int T;
    cin >> T;

    while(T--) 
        test();
    
    return 0;
}

// By Shihab Mahamud
// Date: Sunday, June 06, 2021 | 08:50:07 PM (+06)
