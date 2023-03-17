#include <bits/stdc++.h>
using namespace std;

typedef long long int llint;
typedef unsigned long long int ullint;
typedef short int sint;
typedef unsigned int uint;
#define endn "\n"
#define umap unordered_map
#define uset unordered_set
#define pb push_back

void test() {
    int n;
    cin >> n;
    llint ans = n * 567;
    ans = ans / 9;
    ans = ans + 7492;
    ans = ans * 235;
    ans = ans / 47;
    ans = ans - 498;
    ans = ans / 10;
    cout << abs(ans % 10) << endn;
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
// Saturday, August 07, 2021 | 09:26:02 PM (BST)
// Accepted: 09:31:44 PM (BST)
