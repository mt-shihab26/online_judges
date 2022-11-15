#include <bits/stdc++.h>
using namespace std;

typedef long long int llint;
typedef unsigned long long int ullint;
typedef short int sint;
#define endn "\n"
#define umap unordered_map

//Solve

bool perfact_squre(double num) {
    if (num < 0) {
        return false;
    }
    int root = sqrt(num);
    if (root * root == num) {
        return true;
    }
    return false;
}

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int n;
    cin >>n;
    int ans = -1e7+10;
    int a;

    for (int i = 0; i < n; i++) {
        cin >>a;
        if (perfact_squre(a) == false and ans < a) {
            ans = a;
        }
    }

    cout <<ans <<endn;

    return 0;
}
// Solved By: shh26b
// Friday, July 09, 2021 | 09:09:25 AM (+06)
