#include <bits/stdc++.h>
using namespace std;

typedef long long int llint;
typedef unsigned long long int ullint;
typedef short int sint;
typedef unsigned int uint;
#define endn "\n"
#define umap unordered_map
#define uset unordered_set
#define pb push_back

void test() {
    sint a;
    cin >> a;
    if (360 % (180-a) == 0) {
        cout << "YES" << endn;
    }
    else {
        cout << "NO" << endn;
    }
}

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    sint t;
    cin >> t;
    while (t--) {
        test();
    }
}
// Solved By: shihab4t
// Friday, August 06, 2021 | 08:15:06 PM (+06)
