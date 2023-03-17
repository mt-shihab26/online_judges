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

void test() {
    int x[5];
    cin >> x[1] >> x[2] >> x[3] >> x[4];
    uset<int> a;
    umap<int, int> mp;
    for (int i = 1; i <= 4; i++) {
        a.insert(x[i]);
        mp[x[i]]++;
    }

    int sz = a.size();
    int ans = 0;
    
    if (sz >= 3)
        ans = 2;
    else if (sz == 2) {
        if (mp.begin()->second == 2 && (++mp.begin())->second == 2) {
            ans = 2;
        }
        else {
            ans = 1;
        }
    }
    cout << ans << endn;
}

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        test();
    }
}
// Solved By: shihab4t
// Monday, August 09, 2021 | 06:13:04 AM (+06)
