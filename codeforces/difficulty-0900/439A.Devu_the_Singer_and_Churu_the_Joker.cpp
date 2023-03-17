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
#define loop(i, a, b)                 \
    for (i = a; i < b; i++)
#define test_cases                    \
    int t; cin >> t; while (t--) solve();

#define debug(...) __f(#__VA_ARGS__, __VA_ARGS__)
template <typename Arg1>
void __f(const char *name, Arg1 &&arg1) {
    cout << name << " = " << arg1 << std::endl; }
template <typename Arg1, typename... Args>
void __f(const char *names, Arg1 &&arg1, Args &&...args) {
    const char *comma = strchr(names + 1, ',');
    cout.write(names, comma - names) << " = " << arg1 << " | ";
    __f(comma + 1, args...); }
template <typename Tp> void print(Tp arr[], int n) {
    for (int i = 0; i < n; i++)
    cout << arr[i] << " "; cout << '\n'; }
template <typename Tp> void print(vector<Tp> &vc) {
    for (auto &ith : vc) cout << ith << " ";
    cout << '\n'; }

#define PI acos(-1.0)
#define EPS 1e-9
#define MOD 1000000007

void solve() {
    
}

int main() {
    first_io;

    int n, d;
    cin >> n >> d;
    vec<int> a(n);
    int i, j;
    loop(i, 0, n) {
        cin >> a[i];
    }

    int time = 0, ct = 0;

    for (i = 0; i < n-1; i++) {
        time += a[i] + 10;
        ct += 2;
    }
    time += a[n-1];

    if (time > d) {
        cout << -1 << endn;
        return 0;
    }

    int rem = d - time;
    ct += rem / 5;

    cout << ct << endn;

    return 0;
}
// Solved by: Shihab Mahamud (github.com/p-nerd)
// Wednesday, January 26, 2022 | 03:30:27 PM (+06)
