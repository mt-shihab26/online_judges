#include <bits/stdc++.h>
using namespace std;

using lli =     long long int;
using str =     string;
#define vec     vector
#define endn    '\n'

#define test_cases \
    int t; cin >> t; while (t--) solve();
template <typename tp>
void print(vector<tp> &vc) {
    for (auto &ith : vc)
        cout << ith.first << " " << ith.second << endn;
    cout << '\n';}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);


    int n;
    cin >> n;
    vec<int> a(n), p(n);
    vec<pair<int, int>> mnvx;
    cin >> a[0] >> p[0];
    mnvx.push_back({p[0], 0});

    for (int i = 1; i < n; i++) {
        cin >> a[i] >> p[i];
        if (p[i] < mnvx.back().first) {
            mnvx.push_back({p[i], i});
        }
    }

    lli ans = 0, tmp;

    for (int i = 0; i < mnvx.size()-1; i++) {
        tmp = 0;
        for (int j = mnvx[i].second; j < mnvx[i+1].second; j++) {
            tmp += a[j];
        }
        ans += tmp * mnvx[i].first;
    }

    tmp = 0;
    for (int j = mnvx.back().second; j < n; j++) {
        tmp += a[j];
    }
    ans += tmp * mnvx.back().first;
    
    cout << ans << endn;

    return 0;
}
// Tuesday, February 15, 2022 | 02:08:29 AM (+06)
