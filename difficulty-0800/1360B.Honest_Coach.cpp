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
    vector<int> s(n);
    int i;
    for (i = 0; i < n; i++) {
        cin >> s[i];
    }
    sort(s.begin(), s.end());

    int mn = INT_MAX;
    for (i = 1; i < n; i++) {
        mn = min(mn, s[i]-s[i-1]);
    }
    cout << mn << endn;
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
// Sunday, July 25, 2021 | 07:49:46 PM (+06)
