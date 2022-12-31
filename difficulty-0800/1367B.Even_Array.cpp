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
    vector<int> a(n);
    int i, odd_ct = 0, even_ct = 0, not_good = 0;
    for (i = 0; i < n; i++) {
        cin >> a[i];
        if (a[i] % 2 == 0)
            even_ct++;
        else
            odd_ct++;
        if (i % 2 != a[i] % 2)
            not_good++;
    }

    if (ceil(n/2.0) != even_ct || n / 2 != odd_ct) {
        cout << -1 << endn;
        return;
    }
    cout << not_good/2 << endn;
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
// Solved By: shihab4t
// Sunday, July 25, 2021 | 12:18:32 PM (+06)
