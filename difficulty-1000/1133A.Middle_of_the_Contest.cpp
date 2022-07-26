#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define endn "\n"

void test(void) {
    int h1, m1, h2, m2;
    char cht;
    cin >> h1 >> cht >>m1 >>h2 >>cht >>m2;
    // cout <<h1 <<" " <<m1 <<" ";
    // cout <<h2 <<" " <<m2;

    lli first_m = h1 * 60 + m1;
    lli second_m = h2 * 60 + m2;
    // cout <<first_m <<" " <<second_m <<endn;

    lli mid_point = (second_m - first_m) / 2;
    mid_point = mid_point + first_m;
    // cout <<mid_point <<endn;
    int mid_h = mid_point / 60;
    int mid_m = mid_point - (mid_h * 60);

    if (mid_h < 10) {
        cout <<0;
    }
    cout <<mid_h <<":";
    if (mid_m < 10) {
        cout <<0;
    }
    cout <<mid_m <<endn;



}

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    
    
    test();
    
    return 0;
}
// Solved By: shihab4t
// Wednesday, June 23, 2021 | 12:25:46 AM (+06)
