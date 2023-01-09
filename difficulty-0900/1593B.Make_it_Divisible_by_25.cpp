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
    int t;cin >> t;while (t--) cout << solve() << endn;

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


int solve() {
    str n;
    cin >> n;
    int len = n.length(), i, j, ith, jth;
    int mn = INT_MAX;
    for (i = 0; i < len; i++) {
        ith = n[i] - '0';
        for (j = i+1; j < len; j++) {
            jth = n[j] - '0';
            if ((ith*10+jth) % 25 == 0) {
                mn = min(len - j - 1 + j - i - 1, mn);
            }
        }
    }
    return mn;
}

int main() {
    first_io;

    test_cases;

    return 0;
}
// Shihab Mahamud (github.com/p-nerd)// Wednesday, February 23, 2022 | 12:03:01 PM (+06)
