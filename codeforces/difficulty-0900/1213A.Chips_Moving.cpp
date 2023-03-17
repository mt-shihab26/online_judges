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

    int n;
    cin >> n;
    vector<int> x(n);
    int even = 0, odd = 0;
    for (int i = 0; i < n; i++) {
        cin >> x[i];
        if (x[i] % 2) {
            odd++;
        }
        else {
            even++;
        }
    }
    cout << min(odd, even) << endn;
}
// Solved By: p-nerd
// Sunday, July 25, 2021 | 07:25:25 AM (+06)
