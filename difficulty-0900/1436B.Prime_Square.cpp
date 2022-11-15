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
    for (int i = 0; i < n-1; i++) {
        for (int k = 0; k < n; k++) {
            if (i == k) {
                cout << "1 1 ";
                k++;
            }
            else 
                cout << 0 << " ";
        }
        cout << endn;
    }
    cout << 1 << " ";
    for (int i = 1; i < n-1; i++) {
        cout << 0 << " ";
    }
    cout << 1 << " \n";
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
// Tuesday, July 20, 2021 | 08:18:34 PM (+06)
