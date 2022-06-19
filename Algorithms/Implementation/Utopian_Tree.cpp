// بسم الله الرحمن الرحيم
#include <bits/stdc++.h>
using namespace std;

typedef long long int llint;
typedef unsigned long long int ullint;
typedef short int sint;
#define endn "\n"

//Solve
void test(void) {
    sint n;
    cin >>n;
    int groth = 1;
    for (int i = 1; i <= n; i++) {
        if (i % 2) {
            groth *= 2;
        }
        else {
            groth++;
        }
    }
    cout <<groth <<endn;
}

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    sint t;
    cin >>t;
    while (t--) {
        test();
    }

    return 0;
}
// Solved By: shihab4t
// Sunday, July 04, 2021 | 03:12:41 PM (+06)
