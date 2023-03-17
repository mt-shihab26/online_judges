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
    int ones = 0, twos = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (a[i] == 1)
            ones++;
        else
            twos++;
    }
    int remain = twos % 2;
    if (remain > 0) {
        remain *= 2;
        if (ones == 0) {
            cout << "NO" << endn;
            return;
        }
        ones -= remain;
    }
    if (ones % 2 == 0)
        cout << "YES" << endn;
    else
        cout << "NO" <<endn;
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
// Solved By: p-nerd
// Monday, July 26, 2021 | 04:48:19 PM (+06)
