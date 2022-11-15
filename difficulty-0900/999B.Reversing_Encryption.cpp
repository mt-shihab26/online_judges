#include <bits/stdc++.h>
using namespace std;

typedef long long int llint;
typedef unsigned long long int ullint;
typedef short int sint;
#define endn "\n"
#define umap unordered_map
#define uset unordered_set
#define pb push_back

vector<sint> get_divisors(sint n) {
    sint root = sqrt(n);
    vector<sint> diviors;
    diviors.pb(1);
    for (sint i = 2; i <= root; i++) {
        if (n % i == 0) {
            diviors.pb(i);
            sint x = n / i;
            if (x != i)
                diviors.pb(x);
        }
    }
    if (n != 1)
        diviors.pb(n);
    return diviors;
}

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    sint n;
    cin >> n;
    string str;
    cin >> str;
    auto divisors = get_divisors(n);
    sort(divisors.begin(), divisors.end());

    for (auto divisor : divisors) {
        reverse(str.begin(), str.begin()+divisor);
    }
    cout << str << endn;
}
// Solved By: shh26b
// Saturday, July 24, 2021 | 12:03:18 PM (BST)
