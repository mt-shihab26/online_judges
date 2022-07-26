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

    int n, t;
    string str;
    cin >> n >> t;
    cin >> str;

    while (t--) {
        for (int i = 0; i < n-1; i++) {
            if (str[i] == 'B' && str[i+1] == 'G') {
                swap(str[i], str[i+1]);
                i++;
            }
        }
    }
    cout << str << endn;
}
// Solved By: shihab4t
// Thursday, July 15, 2021 | 12:17:22 PM (+06)
