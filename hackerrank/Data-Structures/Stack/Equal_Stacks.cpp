#include <bits/stdc++.h>
using namespace std;

#define endn                '\n'
#define umap                unordered_map
#define uset                unordered_set
#define pb                  push_back

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

template <typename TP,typename TP2>
void print_pair_stack(stack<pair<TP, TP2>> st) {
     while (!st.empty()) {
        cout << st.top().first << " " << st.top().second << endn;
        st.pop();
    }
    cout << endn;
}

int main(void) {
    first_io();

    int len1, len2, len3, i, tmp, ln;
    cin >> len1 >> len2 >> len3;
    stack<pair<int, int>> st1, st2, st3;
    
    vector<int> tmpv;
    for (i = 0; i < len1; i++) {
        cin >> tmp;
        tmpv.push_back(tmp);
    }
    ln = tmpv.size();
    for (i = ln-1; i >= 0; i--) {
        if (st1.empty()) st1.push({tmpv[i], tmpv[i]});
        else st1.push({st1.top().first + tmpv[i], tmpv[i]});
    }

    tmpv.clear();
    for (i = 0; i < len2; i++) {
        cin >> tmp;
        tmpv.push_back(tmp);
    }
    ln = tmpv.size();
    for (i = ln-1; i >= 0; i--) {
        if (st2.empty()) st2.push({tmpv[i], tmpv[i]});
        else st2.push({st2.top().first + tmpv[i], tmpv[i]});
    }

    tmpv.clear();
    for (i = 0; i < len3; i++) {
        cin >> tmp;
        tmpv.push_back(tmp);
    }
    ln = tmpv.size();
    for (i = ln-1; i >= 0; i--) {
        if (st3.empty()) st3.push({tmpv[i], tmpv[i]});
        else st3.push({st3.top().first + tmpv[i], tmpv[i]});
    }

    int rs = 0;

    while (true) {
        if (st1.empty() || st2.empty() || st3.empty()) {
            break;
        }
        if (st1.top().first == st2.top().first && st2.top().first == st3.top().first) {
            rs = st1.top().first;
            break;
        }
        else if (st1.top() < st2.top()) {
            if (st2.top() < st3.top()) {
                st3.pop();
            }
            else {
                st2.pop();
            }
        }
        else if (st1.top() < st3.top()) {
            st3.pop();
        }
        else {
            st1.pop();
        }
    }
   
    cout << rs << endn;

    return 0;
}
// Solved by: Shihab Mahamud (github.com/shihab4t)
// Monday, October 04, 2021 | 06:38:33 PM (+06)
