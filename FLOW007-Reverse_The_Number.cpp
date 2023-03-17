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
    int num;
    cin >> num;
    bool flag = false;
    int mod_value;
    while(num) {
        mod_value = num % 10;
        if (flag || mod_value) {
            cout << mod_value;
            flag = true;
        }
        num /= 10;
    }
    cout << endn;
}

int main(void) {
    int t;
    cin >> t;
    while (t--)
        test(); 
    return 0;
}
// shihab4t
// Date: Monday, June 07, 2021 | 09:47:15 PM (+06)
