#include <bits/stdc++.h>
using namespace std;

typedef long long int llint;
typedef unsigned long long int ullint;
typedef short int sint;
#define endn "\n"
#define umap unordered_map
#define uset unordered_set

int a[100005];

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int n, c1 = 0, c2 = 0, mx = 0, mn = 1000000007;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        mx = max(mx, a[i]);
        mn = min(mn, a[i]);
    }
    for (int i = 0; i < n; i++) {
        if (a[i] == mx) c1++;
        if (a[i] == mn) c2++;
    }
    if (mx == mn) {
        cout << 0;
    }
    else {
        cout << (n-c1-c2) << endn;
    }
}
// Solved By: shihab4t
// Friday, July 16, 2021 | 02:40:36 AM (+06)