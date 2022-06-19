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
    int len;
    cin >>len;
    int arr[len];
    int ct = 0;
    for (int i = 0; i < len; i++) {
        cin >>arr[i];
        if (arr[i] == 1) {
            ct++;
        }
    }
    cout <<ct <<endn;
    int i;
    for (i = 1; i < len; i++) {
        if (arr[i] == 1) {
            cout <<arr[i-1] <<" ";
        }
    }
    cout <<arr[len-1] <<endn;
}

int main(void) {
    fastio;
    test();
    return 0;
}
// Solved By: shihab4t
// Sunday, June 20, 2021 | 01:49:35 AM (+06)
