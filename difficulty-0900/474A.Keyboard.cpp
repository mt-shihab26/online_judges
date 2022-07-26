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

    char which_po;
    cin >> which_po;
    string mas;
    cin >> mas;
    string keybord = "qwertyuiopasdfghjkl;zxcvbnm,./";
    string ans;
    int j;
    for (int i = 0; i < mas.length(); i++) {
        size_t po;
        po = keybord.find(mas[i]);
        ans += keybord[po + (which_po == 'R' ? -1 : 1)];
    }
    cout << ans << endn;
}
// Solved By: shihab4t
// Friday, July 16, 2021 | 06:54:09 PM (BST)
