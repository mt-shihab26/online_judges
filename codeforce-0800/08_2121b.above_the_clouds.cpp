#include <bits/stdc++.h>

using namespace std;

void tc() {
    int n;
    cin >> n;
    string s;
    cin >> s;

    map<char, int> m;

    for (auto c : s) {
        if (m.find(c) == m.end()) {
            m[c] = 1;
        } else {
            m[c]++;
        }
    }

    for (int i = 1; i < n - 1; i++) {
        if (m[s[i]] >= 2) {
            cout << "YES\n";
            return;
        }
    }

    cout << "NO\n";
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        tc();
    }
}
