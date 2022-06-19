#include <bits/stdc++.h>
using namespace std;

using lli = long long int;
using str = string;

#define vec         vector
#define endn        '\n'
#define first_io    ios_base::sync_with_stdio(false); cin.tie(NULL);
#define file_io     freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
#define test_cases  int t; cin >> t; while (t--) solve();

template <typename tp> void print(tp arr[], int n) {for (int i = 0; i < n; i++) cout << arr[i] << " "; cout << '\n';}
template <typename tp> void print(vector<tp> &vc) {for (auto &ith : vc) cout << ith << " "; cout << '\n';}
template <typename tp> void print(set<tp> &s) {for (auto ith : s) {cout << ith << " ";} cout << endn;}


void solve() {
    string s;
    cin >> s;
    map<char, bool> mp;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] >= 'A' && s[i] <= 'Z') {
            if (mp[s[i]-'A' + 'a'] != true) {
                cout << "NO" << endn;
                return;
            }
        }
        else {
            mp[s[i]] = true;
        }
    }
    cout << "YES" << endn;
}

int main() {
    first_io;

    test_cases;

    return 0;
}
// Shihab Mahamud (github.com/shihab4t)
// Tuesday, February 22, 2022 | 08:38:59 PM (+06)
