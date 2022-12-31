#include <bits/stdc++.h>
using namespace std;

typedef long long int llint;
typedef unsigned long long int ullint;
typedef short int sint;
#define endn "\n"
#define umap unordered_map
#define uset unordered_set

void test_case(void) {
    llint n;
    cin >> n;
    if (n % 2) {
        cout << "YES" << endn;
    }
    else {
        while (n % 2 == 0) {
            n /= 2;
        }
        if (n == 1) {
            cout << "NO" << endn;
        }
        else {
            cout << "YES" << endn;
        }
    }
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
// Saturday, July 17, 2021 | 04:36:21 PM (+06)
