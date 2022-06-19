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

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int q;
    cin >> q;
    sort(a, a+n);
    int w;
    while (q--) {
        cin >> w;
        auto it = upper_bound(a, a+n, w);
        int ans = (it - a);
        cout << ans << endn;
    }
}
// Solved By: shihab4t
// Friday, July 30, 2021 | 05:26:25 PM (+06)
