#include <bits/stdc++.h>
using namespace std;

typedef long long int llint;
typedef unsigned long long int ullint;
typedef short int sint;
#define endn "\n"

//Solve
void test(void) {
    int n, k;
    cin >>n >>k;

    int ans = 0;
    if (n % k == 0) {
        ans = 1;
    }
    if (n >= k and n % k != 0) {
        ans = 2;
    }
    else if (n < k) {
        ans = ceil(double(k) / n);
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
// Solved By: shihab4t
// Thursday, July 08, 2021 | 08:24:05 AM (+06)
