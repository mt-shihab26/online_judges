#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define endn "\n"

// void test(void) {
//     int n, a, b;
//     cin >>n >>a >>b;
//     int i, j;
//     for (i = 0; i < n; ) {
//         for (j = 0; j < b and i < n; j++) {
//             cout <<char('a' + j);
//             i++;
//         }
//     }

//     cout <<endn;
// }

void test(void) {
    int n, a, b;
    cin >>n >>a >>b;
    int i, j;
    for (i = 0; i < n; i++) {
        cout << char('a' + i % b);
    }
    cout <<endn;
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
// Solved By: shihab4t
// Thursday, June 24, 2021 | 09:06:10 PM (+06)
