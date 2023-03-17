#include <bits/stdc++.h>
using namespace std;
//define
#define endn "\n"
#define fastio \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL); \
    cout.tie(NULL);

// Solve
int alpha[26];
void test(void) {
    int len, q;
    cin >>len >>q;
    string song;
    cin >>song;
    int l, k, i, sum;
    int arr[song.size()];
    arr[0] = (song[0]-'a') + 1;
    // alpha[song[0]-'a']++;
    // cout <<arr[0] <<endn;
    for (int i = 1; i < song.size(); i++) {
        arr[i] = arr[i-1]  + ((song[i] - 'a') + 1);
        // alpha[song[i]-'a']++; 
        // cout <<arr[i] <<endn;
    }
    // cout <<endn;
    while (q--) {
        sum = 0;
        cin >>l >>k;
        if (l == 1) {
            cout <<arr[k-1] <<endn;
        }
        else 
            cout <<arr[k-1] - arr[l-2] <<endn;
    }
}

int main(void) {
    fastio;
    test();
    return 0;
}
// Solved By: p-nerd
// Sunday, June 20, 2021 | 04:37:06 PM (+06)
