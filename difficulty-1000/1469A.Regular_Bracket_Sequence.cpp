#include <bits/stdc++.h>
using namespace std;

typedef long long int llint;
typedef unsigned long long int ullint;
typedef short int sint;
#define endn "\n"
#define umap unordered_map
#define uset unordered_set

void test_case(void) {
    string str;
    cin >> str;
    
    bool flag = true;
    if (str.length() % 2 || str.front() == ')' || str.back() == '(') {
        cout << "NO" << endn;
    }
    else {
        cout << "YES" << endn;
    }
}

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        test_case();
    }
}
// Solved By: shihab4t
// Saturday, July 17, 2021 | 03:44:52 PM (+06)
