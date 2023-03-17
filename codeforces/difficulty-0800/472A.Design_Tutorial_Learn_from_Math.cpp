#include <bits/stdc++.h>
using namespace std;
//define
#define endn "\n"
#define fastio \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL); \
    cout.tie(NULL);

// Solve
void test(void) {
    int num;
    cin >>num;
    if (num % 2)
        cout <<num-9 <<" " <<9 <<endn;
    else 
        cout <<num-8 <<" " <<8 <<endn;
}

int main(void) {
    fastio;
    test();
    return 0;
}
// Solved By: p-nerd
// Saturday, June 19, 2021 | 10:10:49 PM (+06)
