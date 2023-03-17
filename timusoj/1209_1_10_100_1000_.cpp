// بسم الله الرحمن الرحيم
#include <bits/stdc++.h>
using namespace std;

typedef long long int lli;
typedef unsigned long long int ulli;
#define endn "\n"

//Solve
int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int t;
    ulli n;
    cin >>t;
    while (t--) {
        cin >>n;
        ulli num = (8*n)-7;
        ulli root = sqrt(num);
        if (root * root == num) {
            cout <<1;
        }
        else {
            cout <<0;
        }

        if (t != 0) {
            cout <<" ";
        }
    }

    return 0;
}
// Solved By: shihab4t
// Wednesday, June 30, 2021 | 09:01:30 AM (+06)
