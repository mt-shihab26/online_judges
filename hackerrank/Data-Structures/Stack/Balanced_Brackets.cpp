#include <bits/stdc++.h>
using namespace std;

typedef long long int llint;
typedef unsigned long long int ullint;
typedef short int sint;
#define endn "\n"
#define umap unordered_map

string test(void) {
    string s;
    cin >>s;
    stack<char> st;
    
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '(' || s[i] == '{' || s[i] == '[') {
            st.push(s[i]);
            continue;
        }

        if (st.empty()) {
            return "NO";
        }
        
        if ((s[i] == ')' && st.top() == '(') ||
            (s[i] == '}' && st.top() == '{') || 
            (s[i] == ']' && st.top() == '['))
        {
            st.pop();
        }
        else {
            return "NO";
        }
    }
    return st.empty() ? "YES" : "NO";
}

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int t;
    cin >>t;
    while (t--) {
        cout << test() <<endn;
    }
}
