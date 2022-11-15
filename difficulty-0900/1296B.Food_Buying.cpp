#include <bits/stdc++.h>
using namespace std;

typedef long long int llint;
typedef unsigned long long int ullint;
typedef short int sint;
#define endn "\n"

//Solve
void test(void) {
    int s;
    cin >>s;
    int ans = 0;
    int pw = 1e9;
    while (s > 0) {
        while (s < pw) pw /= 10;
        ans += pw;
        s -= pw - pw / 10;
    }
    cout <<ans <<endn;
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
// Tuesday, July 06, 2021 | 08:58:29 AM (+06)
