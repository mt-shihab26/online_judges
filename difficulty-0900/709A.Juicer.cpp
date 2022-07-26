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

    int n, b, d;
    cin >> n >> b >> d;
    int sizes, ct = 0;
    llint total = 0;
    for (int i = 0; i < n; i++) {
        cin >> sizes;
        if (sizes <= b) {
            total += sizes;
        }
        if (total > d) {
            total = 0;
            ct++;
        }
    }

    cout << ct << endn;
}
// Solved By: shihab4t
// Friday, July 16, 2021 | 10:58:23 AM (+06)
