#include <bits/stdc++.h>
using namespace std;
// Macros
typedef long long int lli;
typedef long double ld;
#define endn "\n"

// Solve
void test(void) {
    int len;
    cin >> len;
    string s;
    cin >> s;
    int j, count, max = 0;
    char max_s[3];
    for (int i = 0; i < s.size()-1; i++) {
        count = 0;
        for (j = 0; j < s.size()-1; j++) {
            if (s[i] == s[j] && s[i+1] == s[j+1]) {
                count++;
            }
        }
        if (count > max) {
            max = count;
            max_s[0] = s[i];
            max_s[1] = s[i+1];
            max_s[2] = '\0';
        }
    }
    cout << max_s << endn;
}

int main(void) {
    test();
    return 0;
}
// p-nerd
// Tuesday, June 08, 2021 | 11:10:14 PM (+06)