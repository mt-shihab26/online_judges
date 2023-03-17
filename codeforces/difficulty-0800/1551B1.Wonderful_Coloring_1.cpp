#include <bits/stdc++.h>
using namespace std;

typedef long long int llint;
typedef unsigned long long int ullint;
typedef short int sint;
#define endn "\n"
#define umap unordered_map
#define uset unordered_set

void test() {
    string str;
    cin >> str;
    map<char, int> a;
    string new_str;
    for (int i = 0; i < str.length(); i++) {
        a[str[i]]++;
        if (a[str[i]] <= 2) {
            new_str.push_back(str[i]);
        }
    }
    // cout << new_str << endn;
    cout << int(new_str.length()/2) << endn;
}

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        test();
    }
}
// Solved By: p-nerd
// Friday, July 23, 2021 | 09:24:32 PM (+06)
