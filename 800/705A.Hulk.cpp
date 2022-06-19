#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef long double ld;
#define endn "\n"

int main(void) {
    int n, i;
    cin >> n;

    if (i == 1) {
        cout << "I hate it" << endn;
        return 0;
    }
    else if (n == 2) {
        cout << "I hate that I love it" << endn;
        return 0;
    }

    if (n % 2) {
        for (i = 0; i < n / 2; i++) {
            cout << "I hate that ";
            cout << "I love that ";
        }
        cout << "I hate it" << endn;
    }
    else {
        for (i = 0; i < (n / 2) - 1; i++) {
            cout << "I hate that ";
            cout << "I love that ";
        }
        cout << "I hate that ";
        cout << "I love it" << endn;
    }
    
    return 0;
}

// By Shihab Mahamud
// Date: Saturday, June 05, 2021 | 02:16:02 PM (+06)
