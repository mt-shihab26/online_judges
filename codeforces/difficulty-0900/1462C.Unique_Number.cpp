#include <bits/stdc++.h>
using namespace std;

typedef long long int lli;
typedef unsigned long long int ulli;
#define endn "\n"

//Solve
void test() {
    int x;
    cin >>x;
    int min = 9;
    if (x <= 9) {
        min = x;
    }
    else if (x > 45) {
        min = -1;
    }
    else {
        int i = 9;
        int j = 0, k = 1;
        while (x > i) {
            x -= i;
            min = (i * j) + min;
            j = pow(10, k);
            i--;
            k++;
        }
        min = (x * j) + min; 
    }
    cout <<min <<endn;
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
// Sunday, July 04, 2021 | 07:32:26 AM (+06)
