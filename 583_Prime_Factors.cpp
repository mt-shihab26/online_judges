#include <bits/stdc++.h>
using namespace std;

#define endn                '\n'
#define umap                unordered_map
#define uset                unordered_set
#define pb                  push_back

typedef short int               sint;
typedef unsigned int            uint;
typedef long long int           llint;
typedef unsigned long long int  ullint;

#define debug(...) __f(#__VA_ARGS__, __VA_ARGS__)
template < typename Arg1 >void __f(const char* name, Arg1&& arg1){cout << name << " = " << arg1 << std::endl;}
template < typename Arg1, typename... Args> void __f(const char* names, Arg1&& arg1, Args&&... args){ const char* comma = strchr(names+1, ','); cout.write(names, comma - names) << " = " << arg1 <<" | "; __f(comma+1, args...);}
inline void first_io() {ios_base::sync_with_stdio(false);cin.tie(NULL);}
inline void file_io() {freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout);}
vector<int> get_randoms(int amount, int first, int last) {vector<int> tmp;srand(time(0));for (int i = 0; i < amount; i++)tmp.push_back(first + ((rand() % (last - first + 1))));return tmp;}
template <typename Tp> void print(Tp arr[], int n) {for (int i = 0; i < n; i++) cout << arr[i] << " "; cout << '\n';}
template <typename Tp> void print(const Tp &vc) {for (auto &ith : vc) cout << ith << " "; cout << '\n';}
template <typename Tp> void print(stack<Tp> st) {while (!st.empty()) { cout << st.top() << " "; st.pop();} cout << '\n';}
template <typename Tp, typename Tp2> void print(unordered_map<Tp, Tp2> ump) {for (auto &ith : ump) {cout << ith.first << " " << ith.second << '\n';} cout << '\n';}

#define GLOBAL_ARRAY_SIZE   10000005
#define LOCAL_ARRAY_SIZE    100005
#define PI                  acos(-1.0)
#define EPS                 1e-9


int main(void) {
    first_io();

    llint n, limit, i;
    while (true) {
        cin >> n;
        if (!n) return 0;
        cout << n << " =";
        if (n < 0) {
            n = -n;
            cout << " -1 x";
        }
        limit = sqrt(n);
        for (i = 2; i <= limit; i++) {
            while (n % i == 0) {
                n /= i;
                limit = sqrt(n);
                if (n <= 1) cout << " " << i;
                else cout << " " << i << " x";
            }
        }
        if (n > 1) cout << " " << n;
            cout << endn;
        }

    return 0;
}
// Solved by: Shihab Mahamud (github.com/shihab4t)
// Wednesday, October 13, 2021 | 01:40:10 AM (+06)
