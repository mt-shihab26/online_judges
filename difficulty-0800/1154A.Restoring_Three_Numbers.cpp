#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define endn "\n"

void exchainge(int &x1, int &x2, int &x3, int &x4) {
    int tmp;
    if (x4 < x1) tmp = x1, x1 = x4, x4 = tmp;
    if (x4 < x2) tmp = x2, x2 = x4, x4 = tmp;
    if (x4 < x3) tmp = x3, x3 = x4, x4 = tmp; 
}

void min_of(int &x1, int &x2, int &x3) {
    int tmp;
    if (x1 > x2) tmp = x1, x1 = x2, x2 = tmp;
    if (x1 > x3) tmp = x1, x1 = x3, x3 = tmp;

    if (x2 > x3) tmp = x2, x2 = x3, x3 = tmp;
}

void test(void) {
    int x1, x2, x3, x4;
    cin >>x1 >>x2 >>x3 >>x4;
    exchainge(x1, x2, x3, x4);
    min_of(x1, x2, x3);
    // cout <<x1 <<" " <<x2 <<" " <<x3 <<" " <<x4 <<" " << endn;
    int c = x4 - x1;
    int b = x4 - x2;
    int a = x4 - x3;

    cout <<a <<" " <<b <<" " <<c <<endn;    

}

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    
    
    test();
    
    return 0;
}
// Solved By: shh26b
// Wednesday, June 23, 2021 | 01:46:16 AM (+06)
