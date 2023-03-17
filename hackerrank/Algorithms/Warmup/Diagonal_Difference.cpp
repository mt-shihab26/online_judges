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
    int arr[n][n], j;
    for (int i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            cin >>arr[i][j];
        }   
        cout <<endn;
    }
    int d1 = 0, d2 = 0;
    for (int i = 0, j = n-1; i < n; i++, j--) {
        d1 += arr[i][i];
        d2 += arr[i][j];
    }
    cout <<abs(d1-d2) <<endn;

    return 0;
}
// Solved By: shihab4t
// Sunday, July 04, 2021 | 04:14:54 PM (+06)
