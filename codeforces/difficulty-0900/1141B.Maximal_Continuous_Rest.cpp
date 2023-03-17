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

    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];

    for (int i = 0; i < n; i++)
        v.push_back(v[i]);

    int mx = 0, ct = 0;
    for (int i = 0; i < n; ) {
        if (v[i] == 1) {
            while (v[i] == 1)
                ct++, i++;
            mx = max(mx, ct);
        }
        else {
            ct = 0, i++;
        }
    }
    cout << mx << endn;
}
// Solved By: p-nerd
// Tuesday, July 20, 2021 | 11:43:30 PM (+06)
