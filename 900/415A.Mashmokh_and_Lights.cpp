#include <bits/stdc++.h>
using namespace std;

typedef long long int llint;
typedef unsigned long long int ullint;
typedef short int sint;
#define endn "\n"
#define umap unordered_map
#define uset unordered_set



int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int n, m;
    cin >> n >> m;
    vector<int> ans(n+1, 0);

    int pressed;
    while (m--) {
        cin >> pressed;
        for (int i = pressed; i <= n; i++) {
            if (ans[i] == 0) {
                ans[i] = pressed;
            }
            else {
                break;
            }
        }
    }
    for (int i = 1; i <= n; i++) {
        cout << ans[i] << " ";
    }
}
// Solved By: shihab4t
// Friday, July 16, 2021 | 08:31:07 PM (BST)
