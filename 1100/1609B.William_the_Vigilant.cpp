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
    
}

int main(void) {
    first_io();

    int n, q;

    cin >> n >> q;
    string str;
    cin >> str;

    int ct = 0;
    for (int i = 2; i < n; i++) {
        if (str[i-2] == 'a' && str[i-1] == 'b' && str[i] == 'c') {
            ct++;
            i += 2;
        }
    }

    int i;
    char ch;
    while (q--) {
        cin >> i >> ch;
        i--;

        int ect = 0;

        for (int j = i-2; j <= i; j++) {
            if (str[j] == 'a' && str[j+1] == 'b' && str[j+2] == 'c') {
                ect++;
            }
        }

        str[i] = ch;

        int fct = 0;
        for (int j = i-2; j <= i; j++) {
            if (str[j] == 'a' && str[j+1] == 'b' && str[j+2] == 'c') {
                fct++;
            }
        }

        if (fct > ect) {
            ct += fct-ect;
        } else {
            ct -= ect-fct;
        }

        cout << ct << endn;
    }

    return 0;
}
// Solved by: Shihab Mahamud (github.com/shihab4t)
// Thursday, December 09, 2021 | 11:33:08 AM (BST)
// Accepted: 12:40:35 PM (BST)
