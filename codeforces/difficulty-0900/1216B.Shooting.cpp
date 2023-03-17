#include <bits/stdc++.h>
using namespace std;

typedef long long int llint;
typedef unsigned long long int ullint;
typedef short int sint;
#define endn "\n"
#define umap unordered_map
#define uset unordered_set
#define pb push_back

bool cmp(pair<int, int> a, pair<int, int> b) {
    if (a.first == b.first) {
        return a.second < b.second;
    }
    return a.first > b.first;
}

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int n;
    cin >> n;
    vector<pair<int, int>> a;
    int tmp;
    for (int i = 0; i < n; i++) {
        cin >> tmp;
        a.pb({tmp, i+1});
    }
    sort(a.begin(), a.end(), cmp);

    int shots = 1;
    int x = 1;
    for (int i = 1; i < a.size(); i++) {
        shots += ((a[i].first * x) + 1);
        x++;
    }
    cout << shots << endn;
    for (auto v : a) {
        cout << v.second << " ";
    }
}
// Solved By: p-nerd
// Saturday, July 24, 2021 | 01:25:27 AM (BST)
