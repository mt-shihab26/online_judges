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

bool cmp(int a, int b) {
    return a > b;
}

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int n, m, i, tmp;
    cin >> n >> m;
    vector<int> mx_a(m), mn_a(m);
    for (i = 0; i < m; i++) {
        cin >> tmp;
        mx_a[i] = tmp;
        mn_a[i] = tmp;
    }
    sort(mn_a.begin(), mn_a.end());

    llint mn_sum = 0;
    int tmp_n = n, j;
    for (i = 0; i < m && tmp_n; i++) {
        for (j = mn_a[i]; j > 0 && tmp_n; j--) {
            mn_sum += j;
            tmp_n--;
        }
    }
    tmp_n = n;

    vector<int> frackted_mx;
    for (i = 0; i < m; i++) {
        for (j = mx_a[i]; j > 0; j--) {
            frackted_mx.pb(j);
        }
    }
    sort(frackted_mx.begin(), frackted_mx.end(), cmp);

    llint mx_sum = 0;
    for (i = 0; tmp_n; i++) {
        mx_sum += frackted_mx[i];
        tmp_n--;
    }

    cout << mx_sum << " " << mn_sum << endn;
}
// Solved By: shihab4t
// Monday, July 26, 2021 | 01:37:00 PM (BST)
