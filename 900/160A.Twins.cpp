#include <bits/stdc++.h>
using namespace std;
// Macros
typedef long long int lli;
typedef long double ld;
#define endn "\n"
// Functions
// Display Vector all element one line 
template <typename T> void display_vector(vector<T> &vac) {
for (int element: vac) cout << element << " "; cout << endn;}

int main(void) {
    int len;
    cin >> len;
    vector<int> coins;
    int temp;
    while(len--) {
        cin >> temp;
        coins.push_back(temp);
    }

    sort(coins.begin(), coins.end());
    reverse(coins.begin(), coins.end());
    
    int i, j;
    int big_sum, small_sum;
    for (i = 0; i < coins.size(); i++) {
        big_sum = 0, small_sum = 0;
        for (j = 0; j <= i; j++) {
            big_sum += coins[j];
        }
        for (j = i+1; j < coins.size(); j++) {
            small_sum +=  coins[j];
        }
        if (big_sum > small_sum) {
            cout << i+1 << endn;
            break;
        }
    }
    return 0;
}

// By Shihab Mahamud
// Date: Monday, June 07, 2021 | 08:42:58 AM (+06)
