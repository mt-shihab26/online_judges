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

    int state;
    cin >>state;

    if (state < 0) {
        sint last = abs(state) % 10;
        sint second_last = (abs(state) % 100) / 10;
        if (last >= second_last) {
            state = abs(state) / 10;
            state = -state;
        }
        else {
            state = abs(state) / 100;
            state = (state*10) + last;
            state = -state;
        }
    }
    cout <<state <<endn;

    return 0;
}
// Solved By: shihab4t
// Sunday, July 04, 2021 | 02:39:25 PM (+06)
