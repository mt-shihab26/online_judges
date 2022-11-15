#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
typedef long double ld;
#define endn "\n"
#define fastio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
inline void file_open(void) {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif 
}

// Solve
void test(void) {
    int num, result;
    cin >> num;
    if (num % 2)
        result = num / 2;
    else 
        result = (num / 2) - 1;
    cout << result << endn;
}

int main(void)
{
    fastio;

    int t;
    cin >> t;
    while (t--)
        test();
    
    return 0;
}
// by: shh26b
// Sunday, June 13, 2021 | 10:22:31 AM (+06)
