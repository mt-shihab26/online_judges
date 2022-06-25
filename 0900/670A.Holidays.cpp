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

    int days;
    cin >>days;

    int var = days / 7;
    int remain = days % 7;

    var = var * 2;

    int min = var, max = var;
    if (remain == 6) {
        min = var + 1;
        max = var + 2;
    }
    else if (remain >= 2) {
        max = var + 2;
    }
    else if (remain == 1) {
        max = var + 1;
    }

    cout <<min <<" " <<max <<endn;

    return 0;
}
// Solved By: shihab4t
// Monday, July 05, 2021 | 09:32:12 AM (+06)
