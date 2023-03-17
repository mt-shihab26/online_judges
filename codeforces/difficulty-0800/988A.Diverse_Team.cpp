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
    int n, k;
    cin >>n >>k;
    int a[n], b[102], i, j, o;
    for (i = 0; i < n; i++) cin >>a[i];
    for (i = 0, o = 0; i < n; i++) {
        if (a[i] != -1 && o <= k) {
            b[o] = i+1;
            o++;
            for (j = i+1; j < n; j++) {
                if (a[i] == a[j]) {
                    a[j] = -1;
                }
            }
        }
    }
    if (o < k) {
        cout <<"NO" <<endn;
    }
    else {
        cout <<"YES" <<endn;
        for (i = 0; i < k-1; i++) 
            cout <<b[i] <<" ";
        cout <<b[i] <<endn;
    }

}

int main(void) {
    fastio;
    test();
    return 0;
}
// Solved By: p-nerd
// Sunday, June 20, 2021 | 12:59:41 AM (+06)
