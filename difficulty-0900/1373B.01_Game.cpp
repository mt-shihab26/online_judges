#include <bits/stdc++.h>
using namespace std;

typedef long long int lli;
typedef unsigned long long int ulli;
#define endn "\n"

//Solve
void test(void) {
    string bi;
    cin >>bi;
    
    int len_of_0 = 0, len_of_1 = 0;
    for (int i = 0; i < bi.length(); i++) {
        if (bi[i] == '0') {
            len_of_0++;
        }
        else {
            len_of_1++;
        }
    }

    int total_moves = min(len_of_0, len_of_1);

    if (total_moves % 2) {
        cout <<"DA" <<endn;
    }
    else {
        cout <<"NET" <<endn;
    }

}

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int t;
    cin >>t;
    while (t--) {
        test();
    }

    return 0;
}
// Solved By: p-nerd
// Saturday, July 03, 2021 | 03:13:44 AM (+06)
