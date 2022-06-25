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
    string str;
    cin >> str;

    for (int i = 0; i <= 4; i++) {
        if (str.substr(0, i) + str.substr(n-4+i, 4-i) == "2020") {
            cout << "YES" << endn;
            return;
        }
    }
    cout << "NO" << endn;
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
// Monday, July 26, 2021 | 12:02:44 PM (+06)
