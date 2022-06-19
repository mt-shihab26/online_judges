#include <bits/stdc++.h>
using namespace std;

typedef long long int llint;
typedef unsigned long long int ullint;
typedef short int sint;
#define endn "\n"
#define umap unordered_map
#define uset unordered_set

void test_case() {
    llint n;
    cin >> n;

    llint pn = 0, temp;
    for (int k = 2 ; k < 30; k++) {
        temp = (pow(2, k) - 1);
        if (n % temp == 0) {
            cout << int(n / temp) << endn;
            return;
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
// Sunday, July 18, 2021 | 07:36:48 PM (+06)