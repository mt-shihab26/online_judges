#include <bits/stdc++.h>
using namespace std;

typedef long long int llint;
typedef unsigned long long int ullint;
typedef short int sint;
#define endn "\n"
#define umap unordered_map
#define uset unordered_set

int grid[25][25];

void test() {
    int h, w;
    cin >> h >> w;

    for (int i = 0; i < 25; i++) {
        for (int j = 0; j < 25; j++) {
            grid[i][j] = 0;
        }
    }

    for (int i = 1; i <= h; i++) {
        for (int j = 1; j <= w; j++) {
            if ((i > 1 && i < h) && (j > 1 && j < w)) {
                grid[i][j] = 0;
                continue;
            }
            if (grid[i][j] == 0 && 
                grid[i-1][j] != 1 &&
                grid[i][j-1] != 1 &&
                grid[i+1][j] != 1 &&
                grid[i][j+1] != 1 &&
                grid[i-1][j-1] != 1 && 
                grid[i-1][j+1] != 1 &&
                grid[i+1][j-1] != 1 &&
                grid[j+1][j+1] != -1) 
            {
                grid[i][j] = 1;
            }
        }
    }
    for (int i = 1; i <= h; i++) {
        for (int j = 1; j <= w; j++) {
            if ((i > 1 && i < h) && (j > 1 && j < w)) {
                cout << 0;
            }
            else if (grid[i][j] == -1) {
                cout << 0;
            }
            else {
                cout << grid[i][j];
            }
        }
        cout << endn;
    }
    cout << endn;
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
// Saturday, July 17, 2021 | 08:54:52 PM (+06)