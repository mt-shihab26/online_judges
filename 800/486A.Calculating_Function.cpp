#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef long double ld;
#define endn "\n"

int main(void) {
    ll n;

    cin >> n;

    ll result;

    if (n % 2) result = ((n/2) + 1) * -1;
    else result = n/2;
    
    cout << result << endn;
    
    return 0;
}

// By Shihab Mahamud
// Date: Saturday, June 05, 2021 | 01:31:16 PM (+06)
