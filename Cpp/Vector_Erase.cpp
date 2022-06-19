// بسم الله الرحمن الرحيم
#include <bits/stdc++.h>
using namespace std;

typedef long long int llint;
typedef unsigned long long int ullint;
typedef short int sint;
#define endn "\n"
#define umap unordered_map

//Solve
int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int len;
    cin >>len;
    vector<int> values;

    for (int i = 0; i < len; i++) {
        int temp;
        cin >>temp;
        values.push_back(temp);
    }

  
    int x, y;
    cin >>x;
    values.erase(values.begin()+x-1);
    cin >>x >>y;
    values.erase((values.begin()+x-1), values.begin()+y-1);

    cout <<values.size() <<endn;
    for (const int &v : values) {
        cout <<v <<" ";
    }
    cout <<endn;

    return 0;
}
// Solved By: shihab4t
// Saturday, July 10, 2021 | 06:52:29 AM (+06)
