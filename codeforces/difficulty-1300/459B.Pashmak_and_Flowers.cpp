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

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    llint n;
    cin >> n;
    vector<int> b(n);
    int i;
    pair<int, int> mn, mx;
    mn = {INT_MAX, 0};
    mx = {0, 0};
    for (i = 0; i < n; i++) {
        cin >> b[i];
        if (b[i] > mx.first) {
            mx.first = b[i];
            mx.second = 1;
        }
        else if (b[i] == mx.first) {
            mx.second++;
        }
        if (b[i] < mn.first) {
            mn.first = b[i];
            mn.second = 1;
        }
        else if (b[i] == mn.first) {
            mn.second++;
        }
    }

    cout << mx.first - mn.first << " ";
    if (mx.first == mn.first)
        cout << n * (n-1) / 2 << endn;
    else 
        cout << (mn.second * 1LL * mx.second) << endn;


}
// Solved By: p-nerd
// Wednesday, July 28, 2021 | 02:44:44 PM (+06)
