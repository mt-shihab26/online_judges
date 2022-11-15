#include <bits/stdc++.h>
using namespace std;

#define endn '\n'

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n; cin >> n;
    int mn = INT_MAX, mx = 0, tmp;
    for (int i = 0; i < n; i++) {
        cin >> tmp;
        mx = max(mx, tmp);
        mn = min(mn, tmp);
    }
    cout << (mx - mn + 1) - n << endn;
}
// Solved By: shh26b
// Wednesday, September 01, 2021 | 04:51:54 AM (+06)