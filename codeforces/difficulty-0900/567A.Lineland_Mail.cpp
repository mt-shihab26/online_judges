#include <bits/stdc++.h>
using namespace std;

typedef long long int llint;
typedef unsigned long long int ullint;
typedef short int sint;
#define endn "\n"
#define umap unordered_map
#define uset unordered_set

int distance(int x2, int x1) {
    int dis = (x2 - x1);
    dis < 0 ? dis = dis * -1 : dis;
    return dis;
}

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int n;
    cin >> n;
    vector<int> x_co(n+1);
    for (int i = 1; i <= n; i++) {
        cin >> x_co[i];
    }
    int mn, mn1 = 2e9+5, mn2 = 2e9+5;
    int mx, mx1 = 0, mx2 = 0;
    for (int i = 1; i <= n; i++) {
        if (i != 1)
            mn1 = distance(x_co[i-1], x_co[i]);
        if (i != n)
            mn2 = distance(x_co[i+1], x_co[i]);
        mn = min(mn1, mn2);

        if (i != 1)
            mx1 = distance(x_co[1], x_co[i]);
        if (i != n) {
            mx2 = distance(x_co[n], x_co[i]);
        }
        mx = max(mx1, mx2);

        cout << mn << " " << mx << endn;
    }
}
// Solved By: p-nerd
// Friday, July 16, 2021 | 11:32:32 AM (+06)
