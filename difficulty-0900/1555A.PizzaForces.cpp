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
    llint n;
    cin >> n;
    llint x = n / 6;
    llint y = n % 6;
    llint ans = 0;
    if (n <= 6)
        ans = 15;
    else if (y == 0)
        ans = (x * 15);
    else if (y <= 2)
        ans = (x * 15) + 5;
    else if (y <= 4)
        ans = (x * 15) + 10;
    else {
        x++;
        ans = x * 15;
    }
    cout << ans << endn;
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
// Sunday, August 01, 2021 | 04:05:51 PM (+06)
