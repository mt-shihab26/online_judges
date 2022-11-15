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
    llint sum = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        sum += a[i];
    }
    int ans = 0;
    int sv = sum / n;
    if (sv*n != sum) {
        ans = -1;
    }
    else {
        for (int i = 0; i < n; i++) {
            if (a[i] > sv) {
                ans++;
            }
        }
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
// Sunday, August 01, 2021 | 10:25:32 PM (BST)
