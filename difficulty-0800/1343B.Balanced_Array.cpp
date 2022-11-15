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
    int half = n / 2;
    if (half % 2) {
        cout << "NO" << endn;
        return;
    }
    cout << "YES" << endn;
    int tmp_half = half;
    for (int i = 2; tmp_half--; i += 2) {
        cout << i << " ";
    }
    int even_sum = (half/2) * (4 + ((half - 1) * 2));

    tmp_half = half-1;
    int odd_sum = 0;
    for (int i = 1; tmp_half--; i += 2) {
        odd_sum += i;
        cout << i << " ";
    }
    cout << even_sum - odd_sum << endn;

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
// Sunday, July 25, 2021 | 08:01:54 AM (+06)
