#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, i, n, j;
    cin >> t;
    while (t--) {
        cin >> n;
        int a[2*n];
        for(i = 0; i < 2*n; i++) cin >> a[i];

        sort (a, a+(2*n));

        int small[n], big[n];

        for (i = 0; i < n; i++) small[i] = a[i];
        for (i = n, j = 0; i < 2*n; i++, j++) big[j] = a[i];

        for (i = 0; i < n; i++) {
            cout << big[i] << " ";
            cout << small[i] << " ";
        }
        cout << endl;
    }

    return 0;
}
