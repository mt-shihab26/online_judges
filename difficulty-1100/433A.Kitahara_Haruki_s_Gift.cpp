#include <bits/stdc++.h>
using namespace std;

typedef long long int llint;
typedef unsigned long long int ullint;
typedef short int sint;
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

    int n;
    cin >> n;
    int hen = 0, tw_hen = 0, tmp;
    for (int i = 0; i < n; i++) {
        cin >> tmp;
        if (tmp == 100) 
            hen++;
        else
            tw_hen++;
    }
    if (hen % 2)
        cout << "NO";
    else if (hen == 0 && tw_hen % 2)
        cout << "NO";
    else 
        cout << "YES";
    cout << endn;
}
// Solved By: shihab4t
// Monday, August 02, 2021 |  8:27:51 AM (BST)
