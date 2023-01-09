#include <bits/stdc++.h>
using namespace std;

typedef long long int llint;
typedef unsigned long long int ullint;
typedef short int sint;
#define endn "\n"
#define umap unordered_map

    

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int n;
    cin >> n;
    int polic = 0;
    int temp, ans = 0;
    while (n--) {
        cin >> temp;
        if (temp == -1) {
            if (polic <= 0) {
                ans++;
            }
            else {
                polic--;
            }
        }
        if (temp > 0) {
            polic += temp;
        }
    }
    cout << ans << endn;
}
// Solved By: p-nerd
// Tuesday, July 13, 2021 | 08:38:09 AM (+06)
