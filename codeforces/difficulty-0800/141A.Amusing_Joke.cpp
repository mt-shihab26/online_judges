#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
typedef long double ld;
#define endn "\n"
inline void file_open(void) {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif 
}

// Solve
void solve(void) {
    string guest, host, str, str_sum;
    cin >> guest >> host >> str;

    str_sum = guest + host;
    sort(str_sum.begin(), str_sum.end());
    sort(str.begin(), str.end());
    
    if (str_sum == str)
        cout << "YES" << endn;
    else 
        cout << "NO" << endn;
}

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    // file_open();
    solve();
    return 0;
}
// by: p-nerd
// Sunday, June 13, 2021 | 09:58:19 AM (+06)
