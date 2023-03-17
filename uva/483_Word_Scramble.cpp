#include <bits/stdc++.h>
using namespace std;

typedef long long int llint;
typedef unsigned long long int ullint;
typedef short int sint;
typedef unsigned int uint;
#define endn '\n'
#define umap unordered_map
#define uset unordered_set
#define pb push_back

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    char ch;
    int is_eof;
    string str;
    while (scanf("%c", &ch) != EOF) {
        if (ch == endn || ch == ' ') {
            reverse(str.begin(), str.end());
            cout << str;
            if (ch == endn)
                cout << endn;
            else
                cout << " ";
            str = "";
        }
        else {
            str.pb(ch);
        }
    }
    reverse(str.begin(), str.end());
    cout << str;
}
// Solved By: shihab4t
// Saturday, August 07, 2021 | 02:23:41 AM (BST)
