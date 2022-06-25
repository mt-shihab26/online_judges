#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
#define endn "\n"

inline int min(int a, int b, int c) {
    if (a > b) a = b;
    if (a > c) a = c;
    return a;
}

int main(void) {

    int n, k, l, c, d, p, nl, np;

    cin >> n >> k >> l >> c >> d >> p >> nl >> np;

    int drink_toast = (k*l) / nl;
    int limes_toast = c * d;
    int solt_toast = p / np;

    int toasts = (min(drink_toast, limes_toast, solt_toast)) / n;
    cout << toasts << endn;
    
    return 0;
}

// By Shihab Mahamud
// Date: Saturday, June 05, 2021 | 11:38:00 AM (+06)
