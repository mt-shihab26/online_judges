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
        cout << ith << endn;
    cout << '\n';}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k;
    cin >> n >> k;
    int f, t, ans, tmp;
    cin >> f >> t;
    if (t > k)
        ans = f - (t - k);
    else
        ans = f;
    for (int i = 0; i < n; i++)
    {
        cin >> f >> t;
        if (t > k)
            tmp = f - (t - k);
        else
            tmp = f;
        ans = max(tmp, ans);
    }

    cout << ans << endn;

    return 0;
}
// Solved by: Shihab Mahamud (github.com/shh26b)
// Saturday, February 12, 2022 | 07:26:42 AM (+06)
