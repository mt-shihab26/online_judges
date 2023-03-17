#include <bits/stdc++.h>
using namespace std;

typedef long long int llint;
typedef unsigned long long int ullint;
typedef short int sint;
#define endn "\n"
#define umap unordered_map
#define uset unordered_set
#define pb push_back
template<typename tem>
void print_vector(vector<tem> &vec) {
for (auto &ele : vec) cout<<ele<<" ";
cout << "\n";}



int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int k2, k3, k5, k6;
    cin >> k2 >> k3 >> k5 >> k6;
    llint sum = 0;
    while (k2 > 0 && k5 > 0 && k6 > 0) {
        sum += 256;
        k2--, k5--, k6--;
    }
    while (k2 > 0 && k3 > 0) {
        sum += 32;
        k2--, k3--;
    }

    cout << sum << endn;
}
// Solved By: p-nerd
// Saturday, July 31, 2021 |  1:15:15 PM (CAST)
