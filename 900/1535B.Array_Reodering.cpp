#include <bits/stdc++.h>
using namespace std;

typedef long long int llint;
typedef unsigned long long int ullint;
typedef short int sint;
#define endn "\n"
#define umap unordered_map
#define uset unordered_set

void test_case() {
    int n, temp;
    cin >> n;
    vector<int> even_a, odd_a;
    int i, j;
    for (i = 0; i < n; i++) {
        cin >> temp;
        if (temp % 2 == 0)
            even_a.push_back(temp);
        else
            odd_a.push_back(temp);
    }
   
    int e = even_a.size();
    int o = n - e;

    llint  ct = e * o;
    ct += (e * (e - 1) / 2);
    
    for (i = 0; i < odd_a.size(); i++) {
        for (j = i + 1; j < odd_a.size(); j++) {
            if (__gcd(odd_a[i], odd_a[j] * 2) > 1) {
                ct++;
            }
        }
    }
    cout << ct << endn;
}

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        test_case();
    }
}
// Solved By: shihab4t
// Thursday, July 22, 2021 | 04:12:36 PM (+06)
