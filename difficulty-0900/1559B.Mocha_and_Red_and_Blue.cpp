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
#define CONST               2*1e8


void solve1(string &str) {
    int len = str.length();
    if (len == 1) {
        if (str[0] == '?') str[0] = 'B';
        return;
    }
    
    if (str[0] == '?') {
        if (str[1] == 'B') str[0] = 'R';
        else str[0] = 'B';
    }

    for (int i = 1; i < len; i++) {
        if (str[i] == '?') {
            if (str[i-1] == 'B') str[i] = 'R';
            else str[i] = 'B';
        }
    }
}

string solve2(string str) {
    int len = str.length();
    if (len == 1) {
        if (str[0] == '?') str[0] = 'R';
        return str;
    }
    
    if (str[0] == '?') {
        if (str[1] == 'R') str[0] = 'B';
        else str[0] = 'R';
    }

    for (int i = 1; i < len; i++) {
        if (str[i] == '?') {
            if (str[i-1] == 'R') str[i] = 'B';
            else str[i] = 'R';
        }
    }
    return str;
}

int count(string &str) {
    int len = str.length();
    int ct = 0;
    for (int i = 1; i < len; i++) {
        if (str[i] == str[i-1]) {
            ct++;
        }
    }
    return ct;
}

int main(void) {
    first_io();

    int t, n, ct1, ct2;
    cin >> t;
    string str, str2;
    while (t--) {
        cin >> n;
        cin.ignore();
        cin >> str;
        str2 = solve2(str);
        solve1(str);
        ct1 = count(str);
        ct2 = count(str2);
        // cout << ct1 << " " << ct2 << endn;
        if (ct1 > ct2) {
            cout << str2 << endn;
        }
        else {
            cout << str << endn;
        }
    }

    return 0;
}
// Solved by: Shihab Mahamud (github.com/shh26b)
// Friday, October 15, 2021 | 06:10:21 PM (+06)
