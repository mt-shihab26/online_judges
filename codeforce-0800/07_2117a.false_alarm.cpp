#include <bits/stdc++.h>

using namespace std;

void tc() {
    int n, x;
    cin >> n;
    cin >> x;
    vector<int> a;
    for (int i = 0; i < n; i++) {
        int val;
        cin >> val;
        a.push_back(val);
    }
    int j = n;
    for (; j >= 0; j--) {
        if (a[j] == 1) {
            break;
        }
    }
    if (n == j) {
        j--;
    }
    // cout << j << endl;

    int last = j - x + 1;

    // cout << last << endl;
    for (int i = 0; i < last; i++) {
        if (a[i] == 1) {
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        tc();
    }

    return 0;
}
