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


int get_first_div(int n) {
    for (int i = 2; i <= n; i++) {
        if (n % i == 0) {
            return i;
        }
    }
    return n;
}

void solve() {
    lli a, b;
    cin >> a >> b;

    if (a > b) swap(a, b);
    if (a == b) {
        cout << "0 0" << endn;
        return;
    }
    lli mx = abs(a - b);
    lli x = a % mx;
    x = min(x, mx - x);

    cout << mx << " " << x << endn;
}

int main() {
    first_io;

    test_cases;

    return 0;
}
// Solved by: Shihab Mahamud (github.com/shh26b)
// Thursday, February 10, 2022 | 08:16:19 PM (+06)
