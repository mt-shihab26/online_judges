#include <bits/stdc++.h>
using namespace std;

typedef long long int llint;
typedef unsigned long long int ullint;
typedef short int sint;
#define endn "\n"
#define umap unordered_map

//Solve
int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int n, m;
    cin >>n >>m;
    cout <<(m % int(pow(2, n))) <<endn;

    return 0;
}
// Solved By: shihab4t
// Saturday, July 10, 2021 | 10:24:37 AM (+06)
