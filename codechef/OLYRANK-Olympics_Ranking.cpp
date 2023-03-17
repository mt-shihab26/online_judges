#include <bits/stdc++.h>
using namespace std;

typedef long long int llint;
typedef unsigned long long int ullint;
typedef short int sint;
typedef unsigned int uint;
#define endn '\n'
#define umap unordered_map
#define uset unordered_set
#define pb push_back

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        int g1, b1, s1, g2, b2, s2;
        cin >> g1 >> b1 >> s1 >> g2 >> b2 >> s2;
        if ((g1 + b1 + s1) > (g2 + b2 + s2)) {
            cout << 1 << endn;
        }
        else {
            cout << 2 << endn;
        }
    }
}
// Solved By: shihab4t
// Monday, August 09, 2021 | 02:33:13 AM (+06)
