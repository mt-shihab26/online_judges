#include <bits/stdc++.h>
using namespace std;

typedef long long int llint;
typedef unsigned long long int ullint;
typedef short int sint;
#define endn "\n"
#define umap unordered_map
#define uset unordered_set

void test() {
    int n;
    cin >> n;
    int floo = n / 3.0;
    int eill = ceil(n / 3.0);
    if ((floo*2)+ eill == n) {
        cout << eill << " " << floo << endn;
    }
    else {
        cout << floo << " " << eill << endn;
    }
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
// Friday, July 23, 2021 | 08:43:39 PM (+06)
