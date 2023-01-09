#include <bits/stdc++.h>
using namespace std;
// Macros
typedef long long int lli;
typedef long double ld;
#define endn "\n"

// Solve
void test(void) {
    string set;
    char ch;
    while (cin >> ch) {
        if (ch != '{' && ch != ',' && ch != '}') {
            set.push_back(ch);
        }
    }
    // cout << set;
    int j, count = 0;
    for (int i = 0; i < set.size(); i++) {
        if (set[i] != '-') {
            for (j = i + 1; j < set.size(); j++) {
                if (set[i] == set[j]) {
                    set[j] = '-';
                    count++;
                }
            }
        }
    }
    cout << set.size() - count << endn;
}

int main(void) {
    test();
    return 0;
}
// p-nerd
// Tuesday, June 08, 2021 | 10:24:42 PM (+06)
