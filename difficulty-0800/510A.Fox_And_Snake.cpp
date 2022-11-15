#include <bits/stdc++.h>
using namespace std;

typedef long long int llint;
typedef unsigned long long int ullint;
typedef short int sint;
#define endn "\n"
#define umap unordered_map
#define uset unordered_set

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int n, m;
    cin >> n >> m;

    string hash_str, dot_str;
    for (int i = 1; i < m; i++) {
        hash_str += '#';
        dot_str += '.';
    }
    hash_str += '#';

    bool flag = true;
    for (int i = 1; i <= n; i++) {
        if (i % 2 == 0) {
            if (flag) {
                cout << dot_str << '#' << endn;
                flag = false;
            }
            else {
                cout << '#' << dot_str << endn;
                flag = true;
            }
        }
        else {
            cout << hash_str << endn;
        }
    }
    
}
// Solved By: shh26b
// Wednesday, July 14, 2021 | 08:43:19 PM (+06)
