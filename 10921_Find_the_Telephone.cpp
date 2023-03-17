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
    
    umap<char, int> mp;
    mp['A'] = mp['B'] = mp['C'] = 2;
    mp['D'] = mp['E'] = mp['F'] = 3;
    mp['G'] = mp['H'] = mp['I'] = 4;
    mp['J'] = mp['K'] = mp['L'] = 5;
    mp['M'] = mp['N'] = mp['O'] = 6;
    mp['P'] = mp['Q'] = mp['R'] = mp['S'] = 7;
    mp['T'] = mp['U'] = mp['V'] = 8;
    mp['W'] = mp['X'] = mp['Y'] = mp['Z'] = 9;

    char ch;
    while (scanf("%c", &ch) != EOF) {
        int tmp = mp[ch];
        if (tmp == 0) {
            cout << ch;
        }
        else {
            cout << tmp;
        }
    }
}
// Solved By: shihab4t
// Saturday, August 07, 2021 | 11:07:34 PM (BST)
