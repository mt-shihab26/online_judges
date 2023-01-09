#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define endn "\n"

void test(void) {
    // {1, 2} {3}
    // {1, 3, 4} {2, 5}
    // {1, 4, 5} {2, 3, 6}
    int num;
    cin >>num;
    lli sum_of_num = num * (num + 1) / 2;
    lli a_ceil = ceil(sum_of_num / 2.0);
    lli b_floor = floor(sum_of_num / 2.0);
    cout <<abs(a_ceil - b_floor) <<endn;
}

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    
    
    test();
    
    return 0;
}
// Solved By: p-nerd
// Monday, June 21, 2021 | 10:12:29 PM (+06)
