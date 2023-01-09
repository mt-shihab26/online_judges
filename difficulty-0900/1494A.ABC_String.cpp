#include <bits/stdc++.h>
using namespace std;

using lli = long long int;
using str = string;

#define vec vector
#define endn '\n'
#define first_io                      \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
#define file_io                       \
    freopen("input.txt", "r", stdin); \
    freopen("output.txt", "w", stdout);
#define test_cases                    \
    int t;cin >> t;while (t--) solve();

template <typename tp, typename tp2>
ostream &operator<<(ostream &ostream, const pair<tp, tp2> &p) {
    return (ostream << p.first << " " << p.second);}
template <typename tp>
ostream &operator<<(ostream &ostream, const vector<tp> &c) {
    int len = c.size();
    for (int i = 0; i < len; i++)
        cout << c[i] << " ";
    return ostream;}
template <typename tp>
ostream &operator<<(ostream &ostream, const set<tp> &s) {
    for (auto ith : s)
        cout << ith << " ";
    return ostream; }


void solve() {
    str s;
    cin >> s;
    int ct = 0;
    if (s.front() == s.back()) {
        cout << "NO" << endn;
        return;
    }
    for (auto ith : s) {
        if (ith == s[0]) {
            ct++;
        }
    }
    if (ct != s.length() / 2) {
        int fb = 0;
        int len = s.length();
        for (int i = 0; i < len; i++) {
            if (s[i] == s.back()) {
                if (fb <= 0) {
                    cout << "NO" << endn;
                    return;
                }
                fb--;
            }
            else {
                fb++;
            }
        }
        cout << (fb == 0 ? "YES" : "NO") << endn;
        return;
    }

    int fb = 0;
    int len = s.length();
    for (int i = 0; i < len; i++) {
        if (s[i] == s[0]) {
            fb++;
        }
        else {
            if (fb <= 0) {
                cout << "NO" << endn;
                return;
            }
            fb--;
        }
    }
    cout << (fb == 0 ? "YES" : "NO") << endn;
}

int main() {
    first_io;

    test_cases;

    return 0;
}
// Shihab Mahamud (github.com/p-nerd)// Wednesday, February 23, 2022 | 02:43:19 PM (+06)
