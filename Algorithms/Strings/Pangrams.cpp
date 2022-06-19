// بسم الله الرحمن الرحيم
#include <bits/stdc++.h>
using namespace std;

typedef long long int llint;
typedef unsigned long long int ullint;
typedef short int sint;
#define endn "\n"

//Solve
bool al[26];
int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    string str;
    getline(cin, str);
    for (int i = 0; i < str.length(); i++) {
        if (str[i] >= 'A' && str[i] <= 'Z') {
            al[str[i]-'A'] = true;
        }
        else if (str[i] >= 'a' and str[i] <= 'z') {
            al[str[i]-'a'] = true;
        }
    }
    bool is_prangram = true;
    for (sint i = 0; i < 26; i++) {
        if (al[i] == false) {
            is_prangram = false;
            break;
        }
    }
    if (is_prangram) {
        cout <<"pangram";
    }
    else {
        cout <<"not pangram";
    }
    cout <<endn;

    return 0;
}
// Solved By: shihab4t
// Sunday, July 04, 2021 | 03:29:37 PM (+06)
