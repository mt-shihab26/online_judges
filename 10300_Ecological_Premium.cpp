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
    int n, farmyard, number_of_animal, friendly;
    cin >> n;
    llint sum = 0;
    while (n--) {
        cin >> farmyard >> number_of_animal >> friendly;
        sum += (farmyard * friendly);
    }
    cout << sum << endn;
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
// Monday, August 09, 2021 | 02:56:20 AM (BST)
