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


void call(int a) {
    if (a == 0) {
        return;
    }
    call(a-1);
    cout <<a << " ";

}

// Solve
void test(void) {
    int n;
    cin >>n;
    cout <<n << " ";
    call(n-1);
}   

int main(void)
{
    fastio;
    test();
    return 0;
}
// Solved By: shihab4t
// Thursday, June 17, 2021 | 01:41:35 PM (+06)
