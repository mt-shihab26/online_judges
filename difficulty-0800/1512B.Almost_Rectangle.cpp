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

void test() {
    int n;
    cin >> n;
    char a[n][n];
    int i, j, x1, x2, y1, y2;
    bool flag = true;
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            cin >> a[i][j];
            if (a[i][j] == '*') {
                if (flag) {
                    x1 = i;
                    y1 = j;
                    flag = false;
                }
                else {
                    x2 = i;
                    y2 = j;
                }
            }
        }
    }
    if (x1 == x2) {
        if (x1 != n-1) {
            a[x1+1][y1] = '*';
            a[x2+1][y2] = '*';
        }
        else {
            a[x1-1][y1] = '*';
            a[x2-1][y2] = '*';
        }
    }
    else if (y1 == y2) {
        if (y1 != n-1) {
            a[x1][y1+1] = '*';
            a[x2][y2+1] = '*';
        }
        else {
            a[x1][y1-1] = '*';
            a[x2][y2-1] = '*';
        }
    }
    else {
        a[x1][y2] = '*';
        a[x2][y1] = '*'; 
    }

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            cout << a[i][j];
        }
        cout << endn;
    }
}

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        test();
    }
}
// Solved By: shh26b
// Monday, July 26, 2021 | 03:12:37 PM (+06)
