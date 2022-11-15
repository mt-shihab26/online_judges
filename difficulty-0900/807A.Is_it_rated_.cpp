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

    int n;
    cin >>n;
    int before, after, i;
    vector<pair<int, int>> ratrings;
    bool is_rated = false;
    for (i = 0; i < n; i++) {
        cin >> before >> after;
        if (before != after) {
            is_rated = true;
        }
        if (is_rated == false) {
            ratrings.push_back({before, after});
        }
    }

    if (is_rated) {
        cout << "rated" << endn;
    }
    else {
        int min = ratrings[0].first;

        for (int i = 0; i < n; i++) {
            if (min < ratrings[i].first) {
                cout << "unrated" <<endn;
                return 0;
            }
            else {
                min = ratrings[i].first;
            }
        }
        cout <<"maybe" <<endn;
    }

    return 0;
}
// Solved By: shh26b
// Saturday, July 10, 2021 | 10:46:41 AM (+06)
