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
    for (auto &ith : vc) cout << ith << " ";}

#define PI acos(-1.0)
#define EPS 1e-9
#define MOD 1000000007

int main() {
    first_io;

    int n, i;
    cin >> n;

    vec<int> nums(n);
    
    loop(i, 0, n) {
        cin >> nums[i];
    }

    int pivot = -1;
    int pval = nums[0];
    vec<int> left, right;
    for (int i = 0; i < n; i++) {
        if (nums[i] < pval) {
            left.push_back(nums[i]);
        }
        else if (nums[i] > pval) {
            right.push_back(nums[i]);
        }
    }

    print(left);
    cout << pval << " ";
    print(right);
    cout << endn;

    return 0;
}
// Solved by: Shihab Mahamud (github.com/shihab4t)
// Thursday, February 03, 2022 | 11:02:46 PM (+06)
