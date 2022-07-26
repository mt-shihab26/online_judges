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

    int n, k;
    cin >>n >>k;
    int buckets[n];
    for (int i = 0; i < n; i++) {
        cin >>buckets[i];
    }

    sort(buckets, buckets+n);

    int chosed_b;
    for (const int &bucket : buckets) {
        if (!(k % bucket)) {
            chosed_b = bucket;
        }
    }
    cout << (k / chosed_b) <<endn;

    return 0;
}
// Solved By: shihab4t
// Saturday, July 10, 2021 | 10:11:57 AM (+06)
