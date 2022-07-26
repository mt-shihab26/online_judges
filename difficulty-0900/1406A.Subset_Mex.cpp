#include <bits/stdc++.h>
using namespace std;

using lli =     long long int;
using str =     string;
#define vec     vector
#define endn    '\n'
#define test_cases int t; cin >> t; while (t--) solve();

template <typename tp> void print(vector<tp> &vc) {for (auto &ith : vc) cout << ith << " "; cout << '\n';}
template <typename tp> void print(set<tp> &s) {for (auto ith : s) {cout << ith << " ";} cout << endn;}

void solve() {
    int n;
    cin >> n;
    vec<int> a(n);
    map<int, int> ma;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        ma[a[i]]++;
    }


    vec<int> b, as;
    for (auto ith : ma) {
        if (ith.second >= 2) {
            b.push_back(ith.first);
        }
        as.push_back(ith.first);
    }

    // print(as);
    // print(b);

    // return;

    int as_size = as.size();

    int ans;

    int i;

    for (i = 0; i < as_size; i++) {
        if (as[i] != i) {
            ans = i;
            break;
        }
    }
    if (i == as_size) {
        ans = i;
    }

    int b_size = b.size();
    for (i = 0; i < b_size; i++) {
        if (b[i] != i) {
            ans += i;
            break;
        }
    }
    if (i == b_size) {
        ans += i;
    }
    
    cout << ans << endn;

    // cout << endn;
    
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    test_cases;

    return 0;
}
// Friday, February 18, 2022 | 11:58:11 AM (+06)
