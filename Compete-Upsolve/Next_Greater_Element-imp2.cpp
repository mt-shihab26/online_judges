// بسم الله الرحمن الرحيم
#include <bits/stdc++.h>
using namespace std;

typedef long long int llint;
typedef unsigned long long int ullint;
typedef short int sint;
#define endn "\n"
#define umap unordered_map


int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int n;
    cin >> n;
    vector<int> values(n);
    vector<int> final_v(n, -1);
    for (int i = 0; i < n; i++) {
        cin >> values[i];
    }

    stack<int> st;
    int i;

    for (i = 0; i < n; i++) {
        while (!st.empty() && values[i] > values[st.top()]) {
            final_v[st.top()] = i;
            st.pop();
        }
        st.push(i);
    }
    while (!st.empty()) {
        values[st.top()] == -1;
        st.pop();
    }

    for (int i = 0; i < n; i++) {
        cout << values[i] << " " << (final_v[i] == -1 ? -1 : values[final_v[i]])  <<endn;
    }

}
// Solved By: shihab4t
// Monday, July 12, 2021 | 11:37:23 AM (+06)
