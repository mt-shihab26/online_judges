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

void test() {
    int n;
    cin >> n;
    vector<int> a(n), b(n);
    int min_a = INT_MAX, min_b = INT_MAX;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        min_a = min(a[i], min_a);
    }
    for (int i = 0; i < n; i++) {
        cin >> b[i];
        min_b = min(b[i], min_b);
    }

    int eated_a, eated_b;
    llint ans = 0;
    for (int i = 0; i < n; i++) {
        eated_a = a[i] - min_a;
        eated_b = b[i] - min_b;
        ans += max(eated_a, eated_b);
    }

    cout << ans << endn;
}

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        test();
    }
}
// Solved By: shh26b
// Sunday, July 25, 2021 | 09:24:11 AM (+06)
