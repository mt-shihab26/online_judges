#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define endn "\n"

int arr[101];
void test(void) {
    int n, m;
    cin >>n >>m;
    int l, r, j;
    int ct = 0;
    for (int i = 0; i < n; i++) {
        cin >>l >>r;
        if (l == r && l == 0)
            arr[l-1]++, ct++;
        else
            for (j = l-1; j < r; j++)
                if (arr[j] == 0) {
                    ct++;
                    arr[j]++;
                }
    }
    bool flag = true;
    if (m-ct == 0)
        cout<< 0 <<endn;
    else {
        cout << m-ct <<endn;
        for (int i = 0; i < m; i++) {
            if (arr[i] == 0) {
                cout <<i+1 <<" ";
                flag = false;
            }
        }
    }
    

}

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    
    test();
    
    return 0;
}
// Solved By: shihab4t
// Monday, June 21, 2021 | 12:43:20 AM (+06)
