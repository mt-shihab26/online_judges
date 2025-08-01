#include <bits/stdc++.h>

using namespace std;

int main() {
    int t, x, y, l;

    cin >> t;
    while (t--) {
        y = 9;
        cin >> x;
        while (x) {
            l = x % 10;
            if (l < y) {
                y = l;
            }
            x /= 10;
        }
        cout << y << "\n";
    }
}
