#include <bits/stdc++.h>
using namespace std;

typedef long long int llint;
typedef unsigned long long int ullint;
typedef short int sint;
typedef string str;
#define endn "\n"
#define umap unordered_map
#define uset unordered_set
#define pb push_back
template<typename tem>
void print_vector(vector<tem> &vec) {
for (auto &ele : vec) cout<<ele<<" ";
cout << "\n";}

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    string st1, st2;
    getline(cin, st1);
    getline(cin, st2);
    umap<char, int> mp1, mp2;
    bool is = true;
    for (int i = 0; i < st1.length(); i++) {
        if (st1[i] != ' ')
            mp1[st1[i]]++;
    }
    for (int i = 0; i < st2.length(); i++) {
        if (st2[i] != ' ') {
            mp2[st2[i]]++;
            if (mp1[st2[i]] < mp2[st2[i]])
                is = false;
        }
        
    }
    if (is)
        cout << "YES";
    else 
        cout << "NO";
    cout << endn;
}
// Solved By: shihab4t
// Monday, August 02, 2021 |  7:51:58 AM (BST)
