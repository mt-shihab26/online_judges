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


void solve() {
    lli n;
    double x;
    cin >> n >> x;
    vec<lli> a(n);
    lli sum = 0;
    lli mx = 0;
    for (lli i = 0; i < n; i++) {
        cin >> a[i];
        mx += ceil(a[i] / x);
        sum += a[i];
    }

    lli mn = ceil(sum / x);

    cout << min(mn, mx)  << " " << max(mn, mx) << endn;
}

int main() {
    first_io;

    test_cases;

    return 0;
}
// Solved by: Shihab Mahamud (github.com/p-nerd)
// Thursday, February 10, 2022 | 07:29:42 PM (+06)
