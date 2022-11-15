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
    vector<int> a;
    int tmp;
    for (int i = 0; i < 2*n; i++) {
        cin >> tmp;
        a.pb(tmp);
    }
    int i, j;
    for (int i = 0; i < 2*n; i++) {
        bool flag = true;
        for (int j = 0; j < i; j++)
            if (a[i] == a[j])
                flag = false;
        if (flag)
            cout << a[i] << " ";
    }
    cout << endn;
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
// Sunday, July 25, 2021 | 10:04:04 AM (+06)
