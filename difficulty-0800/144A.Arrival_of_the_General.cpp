#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
typedef long double ld;
#define endn "\n"
#define fasts ios_base::sync_with_stdio(false)
#define fastcc cin.tie(NULL); cout.tie(NULL);

// Solve
void test(void) {
    int n;
    cin >> n;
    int soilders[n];
    int large_indx, small_indx, large = 0, small = 102;

    for (int i = 0; i < n; i++) {
        cin >> soilders[i];
        if (soilders[i] > large) {
            large = soilders[i]; 
            large_indx = i;
        }
        if (soilders[i] <= small) {
            small = soilders[i];
            small_indx = i;
        }
    }

    int sum = large_indx + ((n-1) - small_indx);
    small_indx < large_indx ? sum-- : sum;
    cout << sum << endn;
}

int main(void)
{
    fasts;
    fastcc;

    test();
    
    return 0;
}
// by: p-nerd
// Sunday, June 13, 2021 | 11:12:28 AM (+06)
