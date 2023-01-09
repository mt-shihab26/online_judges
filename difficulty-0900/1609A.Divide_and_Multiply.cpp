#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define endn '\n'
#define umap unordered_map
#define uset unordered_set

using sint = short int;
using uint = unsigned int;
using llint = long long int;
using ldouble = long double;

#define debug(...) __f(#__VA_ARGS__, __VA_ARGS__)
template <typename Arg1>
void __f(const char *name, Arg1 &&arg1) {
    cout << name << " = " << arg1 << std::endl; }
template <typename Arg1, typename... Args>
void __f(const char *names, Arg1 &&arg1, Args &&...args) {
    const char *comma = strchr(names + 1, ',');
    cout.write(names, comma - names) << " = " << arg1 << " | ";
    __f(comma + 1, args...); }
vector<int> get_randoms(int amount, int first, int last) {
    vector<int> tmp; srand(time(0)); for (int i = 0; i < amount; i++)
    tmp.pb(first + ((rand() % (last - first + 1))));return tmp; }
inline void first_io() {
    ios_base::sync_with_stdio(false);cin.tie(NULL); }
inline void file_io() {
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout); }
template <typename Tp> void print(Tp arr[], int n) {
    for (int i = 0; i < n; i++) cout << arr[i] << " ";cout << '\n'; }
template <typename Tp> void print(const Tp &vc) {
    for (auto &ith : vc) cout << ith << " "; cout << '\n'; }

#define GLOBAL_ARRAY_SIZE 10000005
#define LOCAL_ARRAY_SIZE 100005
#define PI acos(-1.0)
#define EPS 1e-9
#define MOD 1000000007

void test_case() {
    int n;
    cin >> n;
    vector<llint> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int ct = 0;

    for (int i = 0; i < n; i++) {
        while (a[i] % 2 == 0) {
            a[i] /= 2;
            ct++;
        }
    }

    llint sum = 0;
    for (int i = 0; i < n; i++) {
        sum += a[i];
    }

    int mx = max_element(a.begin(), a.end()) - a.begin();
    
    sum -= a[mx];

    llint tmp = a[mx];

    while (ct--) {
        tmp *= 2;
    }

    cout << sum + tmp << endn;
}

int main(void) {
    first_io();

    int t;
    cin >> t;

    while (t--) {
        test_case();
    }

    return 0;
}
// Solved by: Shihab Mahamud (github.com/p-nerd)
// Monday, December 06, 2021 | 04:51:57 PM (+06)