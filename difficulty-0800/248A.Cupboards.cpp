#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
typedef long double ld;
#define endn "\n"
#define faststdio ios_base::sync_with_stdio(false);
#define fastcincout cin.tie(NULL); cout.tie(NULL);
#define fastio faststdio fastcincout

// Solve
void test(void) {
    int n;
    cin >> n;
    int left[n], right[n];
    int left_zero = 0, left_one = 0, right_zero = 0, right_one = 0;
    for (int i = 0; i < n; i++) {
        cin >> left[i] >> right[i];
        left[i] ? left_one++ : left_zero++;
        right[i] ? right_one++ : right_zero++;
    }
    int second = left_one < left_zero ? left_one : left_zero;
    second += right_one < right_zero ? right_one : right_zero;

    cout <<second <<endn;
}

int main(void)
{
    fastio;

    test();
    
    return 0;
}
// by: shihab4t
// Monday, June 14, 2021 | 12:51:48 PM (+06)
