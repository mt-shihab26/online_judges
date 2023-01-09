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

const int mx = 1e7+10;
vector<bool> is_prime(mx, true);
void sieve(int n) {
    is_prime[0] = is_prime[1] = false;
    for (int i = 2; i <= n; i++) {
        if (is_prime[i] == true) {
            for (int j = i+i; j <= n; j += i) {
                is_prime[j] = false;
            }
        }
    }
    // O(n log log n)
}

void solve() {
    int n;
    cin >> n;

    sieve(50);

    for (int i = 0; i <= 50; i++) {
        if (is_prime[i] == true) {
            if (__gcd(i, n-i-1) == 1) {
                cout << i << " " << n-i-1 << " " << 1 << endn;
                return;
            }
        }
    }
}

int main() {
    first_io;

    test_cases;

    return 0;
}
// Solved by: Shihab Mahamud (github.com/p-nerd)
// Tuesday, February 01, 2022 | 12:23:52 AM (+06)
