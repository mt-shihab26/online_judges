#include <bits/stdc++.h>
using namespace std;

typedef long long int llint;
typedef unsigned long long int ullint;
typedef short int sint;
#define endn "\n"

//Solve

// 0 0 0
// 0 0 0

void test(void) {
    int n, m, i, j;
    cin >>n >>m >>i >>j;
    int x1, y1, x2, y2;
    if ((i == 1 && j == 1) || (i == n && j == m)) {
        x1 = 1, y1 = m;
        x2 = n, y2 = 1;
    }
    else {
        x1 = 1, y1 = 1;
        x2 = n, y2 = m;
    }
    cout <<x1 <<" " <<y1 <<" " <<x2 <<" " <<y2 <<endn;
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
// Solved By: p-nerd
// Monday, July 05, 2021 | 10:37:32 AM (+06)
