#include <bits/stdc++.h>
using namespace std;

typedef long long int llint;
typedef unsigned long long int ullint;
typedef short int sint;
#define endn "\n"
#define umap unordered_map
#define uset unordered_set

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int k, l, m, n, d;
    cin >> k >> l >> m >> n >> d;

    int ct = 0;

    for (int i = 1; i <= d; i++) {
        if (i % k == 0 || i % l == 0 || i % m == 0 || i % n == 0) {
            ct++;
        }
    }

    cout << ct << endn;
}
// Solved By: p-nerd
// Thursday, July 15, 2021 | 11:48:33 AM (+06)
