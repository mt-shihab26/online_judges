#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define endn "\n"

void test(void) {
    lli n;
    cin >>n;
    int ct = 0;
    while (n > 1) {
        if (not (n % 2)) {
            n /= 2;
        }
        else if (not (n % 3)) {
            n = n * 2 / 3;
        }
        else if (not (n % 5)) {
            n = n * 4 / 5;
        }
        else {
            break;
        }
        ct++;
    }

    if (n == 1) {
        cout << ct <<endn;
    }
    else {
        cout <<-1 <<endn;
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
// Wednesday, June 23, 2021 | 03:46:26 AM (+06)
