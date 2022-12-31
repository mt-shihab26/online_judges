#include <iostream>
using namespace std;

#define ll long long int

int main(void) {
    ll n, k;
    cin >> n >> k;
    ll mid;
    if (n % 2 == 1) {
        mid = (n / 2) + 1;
    }
    else {
        mid = n / 2;
    }
    if (mid < k) {
        k = k - mid;
        cout << 2+(k-1)*2 << endl;
    }
    else {
        cout << 1+(k-1)*2 << endl;
    }
    return 0;
}
/* Author: shihab4t */