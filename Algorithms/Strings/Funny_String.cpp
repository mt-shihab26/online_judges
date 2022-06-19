// بسم الله الرحمن الرحيم
#include <bits/stdc++.h>
using namespace std;

typedef long long int llint;
typedef unsigned long long int ullint;
typedef short int sint;
#define endn "\n"

//Solve
void test(void) {
    string s;
    cin >>s;
    vector <int> ac_value;
    for (int i = 1; i < s.length(); i++) {
        ac_value.push_back(abs(int(s[i]) - int(s[i-1])));
    }
    bool is_funny = true;
    for (int i = 0, j = int(ac_value.size())-1; i < int(ac_value.size() / 2); i++, j--) {
        if (ac_value[i] != ac_value[j]) {
            is_funny = false;
        }
    }
    if (is_funny) {
        cout <<"Funny";
    }
    else {
        cout <<"Not Funny";
    }
    cout <<endn;
}
int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    sint t;
    cin >>t;
    while (t--) {
        test();
    }

    return 0;
}
// Solved By: shihab4t
// Sunday, July 04, 2021 | 03:54:58 PM (+06)
