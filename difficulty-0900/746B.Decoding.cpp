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

    int n;
    string str, decoded;
    cin >> n >> str;
    int len = str.length(), i;
    if (len % 2 == 0) {
        for (i = 0; i < len; i++) {
            if (i % 2 == 0) {
                decoded = str[i] + decoded;
            }
            else {
                decoded = decoded + str[i];
            }
        }
    }
    else {
        for (i = 0; i < len; i++) {
            if (i % 2 == 0) {
                decoded = decoded + str[i];
            }
            else {
                decoded = str[i] + decoded;
            }
        }
    }

    cout << decoded << endn;
}
// Solved By: shh26b
// Friday, July 16, 2021 | 09:47:29 AM (+06)
