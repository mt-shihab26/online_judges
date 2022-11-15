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

    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    llint sum = 1;
    llint ct = 0;
    llint zeros = 0;
    for (int i = 0; i < n; i++) {
        if (v[i] < 0) {
            ct += abs(v[i] + 1);
            v[i] = -1;
        }
        else if (v[i] == 0) {
            zeros++;
        }
        else if (v[i] > 0) {
            ct += v[i] - 1;
            v[i] = 1;
        }
        sum *= v[i];
    }
    if (zeros == 0 && sum == -1) {
        ct += 2;
    }
    else {
        ct += zeros;
    }
    cout << ct << endn;
}
// Solved By: shh26b
// Tuesday, July 20, 2021 | 07:27:00 PM (+06)
