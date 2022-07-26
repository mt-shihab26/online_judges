#include <bits/stdc++.h>
using namespace std;

using lli = long long int;
using str = string;

#define vec vector
#define endn '\n'
#define loop(i, a, b) for (i = a; i < b; i++)
#define first_io                      \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
#define file_io                       \
    freopen("input.txt", "r", stdin); \
    freopen("output.txt", "w", stdout);

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

int cint(char c) {
    return c - '0';
}

void test_case() {
    str x;
    cin >> x;
    int len = x.size(), p = 0, q = 1, rs = -1, tmp;
    for (int i = 1; i < len; i++) {
        tmp = cint(x[i-1]) + cint(x[i]);
        if (tmp >= 10) {
            rs = tmp;
            p = i-1;
            q = i;
        }
    }

    if (rs == -1) rs = cint(x[0]) + cint(x[1]);

    x.erase(p, 2);
    x.insert(p, to_string(rs));
    cout << x << endn;
}

int main(void) {
    first_io;

    int t;
    cin >> t;
    while (t--) {
        test_case();
    }

    return 0;
}
// Solved by: Shihab Mahamud (github.com/shihab4t)
