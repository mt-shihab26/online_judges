#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
typedef long double ld;
#define endn "\n"
#define faststdio ios_base::sync_with_stdio(false);
#define fastcincout cin.tie(NULL); cout.tie(NULL);
#define fastio faststdio fastcincout
#define tc(sl) int T; cin >>T; while (T--) {sl;}

// Solve
void test(void) {
    string s;
    cin >>s;
    string even, odd;
    for (int i = 0; i < s.size(); i++) {
        if (i % 2)
            odd.push_back(s[i]);
        else 
            even.push_back(s[i]);
    }
    cout <<even <<" " <<odd <<endn;
}

int main(void)
{
    fastio;
    tc(test());
    return 0;
}
// Solved By: shihab4t
// Monday, June 14, 2021 | 10:47:34 PM (+06)
