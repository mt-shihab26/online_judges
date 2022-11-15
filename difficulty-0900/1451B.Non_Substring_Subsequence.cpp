#include <bits/stdc++.h>
using namespace std;

typedef long long int llint;
typedef unsigned long long int ullint;
typedef short int sint;
#define endn "\n"
#define umap unordered_map
#define uset unordered_set

void test(void) {
    int n, q;
    cin >> n >> q;
    string str;
    cin >> str;
    int l, r, i;
    while (q--) {
        cin >> l >> r;
        bool is_good = false;
        for (i = 0; l != 1 && i < l-1; i++)
            if (str[l-1] == str[i]) {
                is_good = true;
                break;
            }
        for (i = r; !is_good && i < str.length(); i++)
            if (str[r-1] == str[i]) {
                is_good = true;
                break;
            }

        if (is_good)
            cout << "YES";
        else
            cout << "NO";
        cout << endn;
    }
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
// Solved By: shh26b
// Thursday, July 22, 2021 | 02:03:41 PM (+06)
