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

    string str;
    cin >> str;
    int flag = 0;
    int ct = 0;
    for (int i = 0; i < str.length(); ) {
        if (str[i] == 'C') {
            int in_ct = 0;
            while (str[i] == 'C' && in_ct < 5) {
                i++;
                in_ct++;
            }
            ct++;
        }
        else {
            int in_ct = 0;
            while (str[i] == 'P' && in_ct < 5) {
                i++;
                in_ct++;
            }
            ct++;
        }
    }
    cout << ct << endn;
}
// Solved By: shh26b
// Friday, July 16, 2021 | 09:53:24 PM (+06)
