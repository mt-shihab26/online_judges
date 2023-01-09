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
    string nums;
    cin >>nums;
    for (int i = 0; i < nums.size(); ) {
        if (nums[i] == '1' && nums[i+1] == '4' && nums[i+2] == '4') {
            i += 3;
        }
        else if (nums[i] == '1' && nums[i+1] == '4') {
            i += 2;
        }
        else if (nums[i] == '1') {
            i++;
        }
        else {
            cout <<"NO" <<endn;
            return;
        }
    }
    cout <<"YES" <<endn;
}

int main(void)
{
    fastio;
    test();
    return 0;
}
// Solved By: p-nerd
// Wednesday, June 16, 2021 | 01:26:33 AM (+06)
