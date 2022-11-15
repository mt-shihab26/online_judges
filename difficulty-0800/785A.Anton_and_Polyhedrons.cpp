#include <bits/stdc++.h>
using namespace std;
// Macros
typedef long long int lli;
typedef long double ld;
#define endn "\n"

// Solve
void test(void) {
    string shap;
    int t;
    int total = 0;
    cin >> t;
    while (t--) {
        cin >> shap;
        if ("Tetrahedron" == shap)
            total += 4;
        else if ("Cube" == shap)
            total += 6;
        else if ("Octahedron" == shap)
            total += 8;
        else if ("Dodecahedron" == shap)
            total += 12;
        else if ("Icosahedron" == shap)
            total += 20;
    }
    cout << total << endn;
}

int main(void) {
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);
    test();
    return 0;
}
// by: shh26b
