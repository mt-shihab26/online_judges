#include <bits/stdc++.h>
using namespace std;

typedef long long int llint;
typedef unsigned long long int ullint;
typedef short int sint;
#define endn "\n"

//Solve
int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int n;
    cin >>n;
    vector<int> b(n+1);
    for (int i = 1; i <= n; i++) {
        cin >>b[i];
    }

    vector<int> a(n+1);
    int x = 0;
    a[1] = b[1] + x;
    cout <<a[1] <<" ";
    for (int i = 2; i <= n; i++) {
        x = max(x, a[i-1]);
        a[i] = b[i] + x;
        cout <<a[i] <<" ";
    }
    // O(n)

    return 0;
}
// Solved By: shihab4t
// Tuesday, July 06, 2021 | 12:37:51 PM (+06)
