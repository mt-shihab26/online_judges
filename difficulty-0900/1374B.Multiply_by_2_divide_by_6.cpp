#include <bits/stdc++.h>
using namespace std;

typedef long long int lli;
typedef unsigned long long int ulli;
#define endn "\n"

//Solve

void test(void) {
    lli num, i = 0;
    cin >>num;
    while (num > 1) {
        if (num % 6 == 0) num /= 6;
        else num *= 2;
        i++;
    }
    // cout <<i <<" " <<num <<endn;
    if (num == 1) {
        cout <<i <<endn;
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
    while (t--) {
        test();
    }    

    return 0;
}
// Solved By: shh26b
// Saturday, July 03, 2021 | 02:58:43 AM (+06)
