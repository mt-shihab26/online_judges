#include <bits/stdc++.h>
using namespace std;
//typedef
typedef long long int lli;
typedef long double ld;
//define
#define endn "\n"
#define faststdio ios_base::sync_with_stdio(false);
#define fastcincout cin.tie(NULL); cout.tie(NULL);
#define fastio faststdio fastcincout
#define tc(sl) int T; cin >>T; while (T--) {sl;}
#define vec vector
//functions
template <typename T>
inline void print_vector(vector<T> &vac) {
for (int ele:vac) cout <<ele <<" "; cout <<"\n";}


// Solve
void test(void) {
    int n, m;
    cin >>n >>m;
    vec<int> amounts;
    int tmp, result = 0;
    int tp = 0;
    for (int i = 0; i < n; i++) {
        cin >>tmp;
        amounts.push_back(tmp);
    }
    sort(amounts.begin(), amounts.end());
    for (int i = 0; i < m; i++) {
        if (amounts[i] < 0)
            result += amounts[i];
    }
    cout <<abs(result) <<endn;
}

int main(void)
{
    fastio;
    test();
    return 0;
}
// Solved By: shihab4t
// Wednesday, June 16, 2021 | 02:26:34 AM (+06)
