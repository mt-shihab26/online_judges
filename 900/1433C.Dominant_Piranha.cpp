#include <bits/stdc++.h>
using namespace std;

typedef long long int llint;
typedef unsigned long long int ullint;
typedef short int sint;
#define endn "\n"
#define umap unordered_map
#define uset unordered_set

void test_case(void) {
    int n;
    cin >> n;
    vector<int> a(n);
    int mx = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        mx = max(mx, a[i]);
    }
    int indx = -1;
    for (int i = 0; i < n; i++) {
        if (a[i] != mx) continue;
        if (i > 0 && a[i-1] != mx) 
            indx = i+1;
        if (i < n-1 && a[i+1] != mx)
            indx = i+1;
    }
    cout << indx << endn;
}

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        test_case();
    }
}
// Solved By: shihab4t
// Saturday, July 17, 2021 | 05:22:12 PM (+06)
