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

    llint n, a, x, y;
    cin >> n >> a >> x >> y;

    llint result;
    result = min(a, n) * x;
    if (n > a)
        result += (n-a) * y;

    cout << result << endn;
}
// Solved By: shihab4t
// Sunday, July 18, 2021 | 01:50:09 AM (+06)
