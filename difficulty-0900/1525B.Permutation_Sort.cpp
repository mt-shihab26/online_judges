#include <bits/stdc++.h>
using namespace std;

typedef long long int llint;
typedef unsigned long long int ullint;
typedef short int sint;
#define endn "\n"
#define umap unordered_map
#define uset unordered_set

int test_case() {
    int n;
    cin >> n;
    int a[n+1];
    bool is_soted = true;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        if (a[i] != i)
            is_soted = false;
    }
    int ans = 2;
    if (is_soted)
        ans = 0;
    else if (a[1] == 1 or a[n] == n)
        ans = 1;
    else if (a[n] == 1 and a[1] == n)
        ans = 3;
    return ans;
}

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        cout << test_case() << endn;
    }
}
// Solved By: shh26b
// Tuesday, July 20, 2021 | 01:36:44 AM (+06)
