#include <bits/stdc++.h>
using namespace std;

typedef long long int llint;
typedef unsigned long long int ullint;
typedef short int sint;
#define endn "\n"
#define umap unordered_map
#define uset unordered_set

void test() {
    string n;
    cin >> n;
    char mx = '0';
    for (int i = 0; i < n.length(); i++) {
        mx = max(mx, n[i]);
    }
    cout << mx << endn;
}

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        test();
    }
}
// Solved By: shh26b
// Saturday, July 17, 2021 | 08:39:35 PM (+06)
