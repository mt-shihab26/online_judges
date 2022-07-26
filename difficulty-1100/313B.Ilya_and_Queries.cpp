#include <bits/stdc++.h>
using namespace std;

typedef long long int llint;
typedef unsigned long long int ullint;
typedef short int sint;
typedef unsigned int uint;
#define endn "\n"
#define umap unordered_map
#define uset unordered_set
#define pb push_back

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    string str;
    cin >> str;
    int len = str.size(), i, j;
    vector<int> a(len+1, false);
    a[0] = 0;
    for (i = 0; i < len-1; i++) {
        if (str[i] == str[i+1]) {
            a[i+1] = a[i] + 1;
        }
        else {
            a[i+1] = a[i];
        }
    }
    a[i+1] = a[i];

    int q, l, r, ct;
    cin >> q;
    while (q--) {
        cin >> l >> r;
        cout << (a[r-1] - a[l-1]) << endn;
    }
}
// Solved By: shihab4t
// Sunday, August 08, 2021 | 03:43:00 AM (+06)
// Accepted: 04:19:17 AM (+06)
