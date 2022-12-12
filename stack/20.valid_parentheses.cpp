#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        
        int len = s.size();
        for (int i = 0; i < len; i++) {
            if (s[i] == '(' || s[i] == '{' || s[i] == '[') {
                st.push(s[i]);
            }
            else {
                if (st.size() == 0) {
                    return false;
                }
                if (s[i] == ')' and st.top() == '(') {
                    st.pop();
                }
                else if (s[i] == '}' and st.top() == '{') {
                    st.pop();
                }
                else if (s[i] == ']' and st.top() == '[') {
                    st.pop();
                }
                else {
                    return false;
                }
            }
        }
        if (st.size() == 0) {
            return true;
        }
        else {
            return false;
        }
    }
};

int main() {
    
}