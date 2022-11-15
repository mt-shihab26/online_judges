#include <bits/stdc++.h>
using namespace std;
// Macros
typedef long long int lli;
typedef long double ld;
#define endn "\n"

// Solve
void test(void) {
    int a, b;
    cin >> a >> b;
    int result;
    if (!(a % b))
        result = 0;
    else {
        result = b - a % b;
    }
    cout << result << endn;
}

int main(void) {
    int t;
    cin >> t;
    while (t--) 
        test();
    return 0;
}
// by: shh26b
