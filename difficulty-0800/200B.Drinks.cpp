#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
typedef long double ld;
#define endn "\n"

int main(void) {
    int n;
    cin >> n;
    int temp;
    ld result = 0;
    for (int i = 0; i < n; i++) {
        cin >> temp;
        result += temp;
    }
    printf("%.12LF", result/n);
    
    return 0;
}

// By Shihab Mahamud
// Date: Sunday, June 06, 2021 | 06:42:38 AM (+06)
