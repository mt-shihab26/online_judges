#include <bits/stdc++.h>
using namespace std;

using lli = long long int;
using str = string;

#define vec vector
#define endn '\n'
#define first_io                        \
    ios_base::sync_with_stdio(false);   \
    cin.tie(NULL);
#define file_io                         \
    freopen("input.txt", "r", stdin);   \
    freopen("output.txt", "w", stdout);
#define test_cases                      \
    int t; cin >> t;while(t--) solve();

template <typename tp>
void print(tp arr[], int n) {
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << '\n';}
template <typename tp>
void print(vector<tp> &vc) {
    for (auto &ith : vc)
        cout << ith << " ";
    cout << '\n';}


bool is_palindrome(str s) {
    int len = s.length();
    for (int i = 0, j = len-1; i <= j; i++, j--) {
        if (s[i] != s[j]) {
            return false;
        }
    }
    return true;
}


void solve() {
    int n, k;
    cin >> n >> k;
    str s;
    cin >> s;
    if (k == 0 || is_palindrome(s)) {
        cout << 1 << endn;
    }
    else {
        cout << 2 << endn;
    }
}

int main() {
    first_io;

    test_cases;

    return 0;
}
// Solved by: Shihab Mahamud (github.com/p-nerd)
// Monday, February 07, 2022 | 02:43:46 AM (+06)
