#include <bits/stdc++.h>
using namespace std;
//define
#define endn "\n"
#define fastio \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL); cout.tie(NULL);

// Solve
void test(void) {
    int len;
    cin >>len;
    int arr[len], i, j;
    for (i = 0; i < len; i++) {
        cin >>arr[i];
    }
    int ct = 0;
    for (i = len-1; i >= 0; i--) {
        if (arr[i] != -1) {
            for (j = i-1; j >= 0; j--) {
                if (arr[i] == arr[j]) {
                    arr[j] = -1;
                    ct++;
                }
            }
        }  
    }
    cout <<len-ct <<endn;
    for (i = 0; i < len; i++) {
        if (arr[i] != -1) {
            cout <<arr[i] <<" ";
        }
    }

    // 
}

int main(void) {
    fastio;
    test();
    return 0;
}
// Solved By: shh26b
// Sunday, June 20, 2021 | 12:36:53 AM (+06)
