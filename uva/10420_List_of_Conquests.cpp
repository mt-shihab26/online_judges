#include <bits/stdc++.h>
using namespace std;

typedef long long int llint;
typedef unsigned long long int ullint;
typedef short int sint;
typedef unsigned int uint;
#define endn "\n"
#define umap unordered_map
#define uset unordered_set
#define pb push_back

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    map<string, int> coun;
    string tmp;
    while (t--) {
        cin >> tmp;
        coun[tmp]++;
        getline(cin, tmp);
    }
    auto it = coun.begin();
    for (auto &each : coun) {
        cout << each.first << " " << each.second << endn;
    }
}
// Solved By: shihab4t
// Saturday, August 07, 2021 | 09:53:36 PM (BST)
// Accepted: 10:00:48 PM (BST)
