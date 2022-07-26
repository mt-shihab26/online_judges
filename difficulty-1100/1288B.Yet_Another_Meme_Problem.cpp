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

int test() {
    int A, B;
    cin >> A >> B;
    cout << (A * 1LL * (to_string(B+1).length() - 1)) << endn;
}

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int n;
    cin >> n;
    while (n--) {
        test();
    }    
}
// Solved By: shihab4t
// Monday, August 02, 2021 | 10:22:13 AM (BST)
