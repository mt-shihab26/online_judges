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
    int sum = 0, even= 0, odd = 0, temp;
    for (int i = 0; i < n; i++) {
        cin >> temp;
        sum += temp;
        temp % 2 ? odd++ : even++;
    }
    cout << (sum % 2 ? odd : even) << endn;
}
// Solved By: shh26b
// Saturday, July 17, 2021 | 09:04:03 AM (+06)
