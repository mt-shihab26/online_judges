#include <bits/stdc++.h>
using namespace std;

typedef long long int llint;
typedef unsigned long long int ullint;
typedef short int sint;
#define endn "\n"
#define umap unordered_map
#define uset unordered_set
#define pb push_back

bool cmp(int a, int b) {
    return a > b;
}

void test() {
    int n, k;
    cin >> n >> k;
    vector<int> a(n), b(n);
    int i;
    for (i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (i = 0; i < n; i++) {
        cin >> b[i];
    }

    sort(a.begin(), a.end());
    sort(b.begin(), b.end(), cmp);

    for (i = 0; i < k; i++) {
        if (a[i] < b[i]) {
            swap(a[i], b[i]);
        }
    }

    llint sum = 0;
    for (i = 0; i < n; i++) {
        sum += a[i];
    }
    cout << sum;
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
// Solved By: shihab4t
// Monday, July 26, 2021 | 03:26:03 AM (BST)
