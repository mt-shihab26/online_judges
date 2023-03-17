#include <bits/stdc++.h>
using namespace std;

#define endn                '\n'
#define umap                unordered_map
#define uset                unordered_set
#define pb                  push_back

// Constants
#define GLOBAL_ARRAY_SIZE   10000005
#define LOCAL_ARRAY_SIZE    100005
#define PI                  acos(-1.0)

typedef short int               sint;
typedef unsigned int            uint;
typedef long long int           llint;
typedef unsigned long long int  ullint;

inline void first_io() {ios_base::sync_with_stdio(false);cin.tie(NULL);}
inline void file_io() {freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout);}
vector<int> get_randoms(int amount, int first, int last) {vector<int> tmp;srand(time(0));for (int i = 0; i < amount; i++)tmp.push_back(first + ((rand() % (last - first + 1))));return tmp;}
template <typename TP> void print_array(TP arr[], int n) {for (int i = 0; i < n; i++)cout << arr[i] << " ";cout << '\n';}
template <typename TP> void print_vector(const TP &vc) {for (auto &ith : vc)cout << ith << " ";cout << '\n';}
template<typename TP> void print_stack(stack<TP> st) {while (!st.empty()) {cout << st.top() << " "; st.pop();}cout << '\n';}


int main(void) {
    first_io();
    stack<int> st;
    int n, cmd, value;
    cin >> n;
    while (n--) {
        cin >> cmd;
        if (cmd == 1) {
            cin >> value;
            if (st.empty()) st.push(value);
            else st.push(max(st.top(), value));
        }
        else if (cmd == 2) {
            st.pop();
        }
        else if (cmd == 3) {
            cout << st.top() << endn;
        }
    }

    return 0;
}
// Solved by: Shihab Mahamud (github.com/shihab4t)
// Monday, October 04, 2021 | 08:28:02 AM (+06)
// Accepted: 09:01:08 AM (+06)
