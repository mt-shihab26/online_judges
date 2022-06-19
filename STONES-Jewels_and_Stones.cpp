#include <bits/stdc++.h>
using namespace std;
// Macros
typedef long long int lli;
typedef long double ld;
#define endn "\n"
// Functions
// print vector all element in one line
template <typename T> inline void print_vector(vector<T> &vac) {
for (int ele : vac) cout << ele << " "; cout << endn; }


// Solve
void test(void) {
    string jw, s;
    cin >> jw >> s;

    sort(jw.begin(), jw.end());

    int count = 0;
    for (int i = 0; i < jw.size(); i++) {
        if (jw[i] != jw[i+1]) {
            for (int j = 0; j < s.size(); j++) {
                if (jw[i] == s[j]) {
                    count++;
                }
            }
        }
    }
    cout << count << endn;
}

int main(void) {
    int t;
    cin >> t;
    while (t--)
        test();
    return 0;
}
// shihab4t
// Date: Tuesday, June 08, 2021 | 09:12:15 AM (+06)
