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
    int n, m;
    cin >> n >> m;
    int a1, a2, a3, a4;
    bool flag = true;
    while (n--) {
        cin >> a1 >> a2 >> a3 >> a4;
        if (a2 == a3)
            flag = false;
    }

    if (m % 2 || flag)
        cout << "NO\n";
    else
        cout << "YES\n";
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
// Sunday, July 25, 2021 | 09:00:12 AM (+06)
