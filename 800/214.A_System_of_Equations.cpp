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

int cnt(int num, int m) {
    int j, ct = 0, sq;
    if (num > m)
        sq = (int)(sqrt(num))+1;
    else 
        sq = (int)(sqrt(m))+1;
    
    for (int i = 0; i < sq; i++) {
        for (j = 0; j < sq; j++) {
            if (i*i + j == num && i + j*j == m) {
                ct++;
            }
        }
    }
    return ct;
}

// Solve
void test(void) {
    int n, m;
    cin >>n >>m;
    cout <<cnt(n, m) <<endn;
}

int main(void)
{
    fastio;
    test();
    return 0;
}
// Solved By: shihab4t
// Wednesday, June 16, 2021 | 02:50:57 AM (+06)
