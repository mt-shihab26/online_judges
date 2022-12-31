#include <bits/stdc++.h>
using namespace std;

using lli = long long int;
using str = string;

#define vec vector
#define pb push_back
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

#define GLOBAL_ARRAY_SIZE 10000005
#define LOCAL_ARRAY_SIZE 100005
#define PI acos(-1.0)
#define EPS 1e-9
#define MOD 1000000007

int main(void) {
    first_io;

    int k;
    cin >> k;
    vec<int> a(12);
    for (int i = 0; i < 12; i++) {
        cin >> a[i];
    }

    sort(a.begin(), a.end(), greater<int>());

    int h = 0;
    int ct = 0;

    for (int i = 0; i < 12 and h < k; i++) {
        h += a[i];
        ct++;
    }

    if (h >= k) {
        cout << ct << endn;
    } else {
        cout << -1 << endn;
    }


    return 0;
}
// Solved by: Shihab Mahamud (github.com/shihab4t)
// Wednesday, January 12, 2022 | 08:30:09 AM (+06)
