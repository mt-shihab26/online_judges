// بسم الله الرحمن الرحيم
#include <bits/stdc++.h>
using namespace std;

typedef long long int llint;
typedef unsigned long long int ullint;
typedef short int sint;
#define endn "\n"
#define umap unordered_map

//Solve
int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    set<int> value;
    
    int q;
    cin >>q;
    int y, x;
    while (q--) {
        cin >>y >>x;
        if (y == 1) {
            value.insert(x);
        }
        else if (y == 2) {
            value.erase(x);
        }
        else {
            if (value.find(x) != value.end()) {
                cout <<"Yes" <<endn;
            }
            else {
                cout <<"No" <<endn;
            }
        }
    }

    return 0;
}
// Solved By: shihab4t
// Saturday, July 10, 2021 | 06:45:18 AM (+06)
