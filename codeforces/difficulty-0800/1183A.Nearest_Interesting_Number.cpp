#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define endn "\n"

int sum_of_digit(int num) {
    int sum = 0;
    while (num) {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

void test(void) {
    int num;
    cin >>num;
    int sum_of;
    while (sum_of_digit(num) % 4) {
        num++;
    }
    cout <<num <<endn;
}

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    
    
    test();
    
    return 0;
}
// Solved By: p-nerd
// Wednesday, June 23, 2021 | 03:57:41 AM (+06)
