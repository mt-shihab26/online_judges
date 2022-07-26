#include <bits/stdc++.h>
using namespace std;

typedef     long long int             llint;
typedef     unsigned long long int    ullint;
typedef     short int                 sint;
#define    endn    "\n"
#define    umap    unordered_map
#define    uset    unordered_set
#define    pb      push_back
template<typename tem> 
void print_vector(vector<tem> &vec) {
for (auto &ele : vec) cout<<ele<<" ";
cout << "\n";}

void test() {
    llint n, k;
    cin >> n >> k;
    vector<llint> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    reverse(a.begin(), a.end());
    llint ans = -1e18;
    int i, j;
    for (i = 0; i < min(500ll, n); i++) {
        for (j = i+1; j < min(500ll, n); j++) {
            ans = max(ans, (n-i)*(n-j) - k * (a[i]|a[j]));
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
// Solved By: shihab4t
// Thursday, July 29, 2021 | 08:52:23 PM (+06)