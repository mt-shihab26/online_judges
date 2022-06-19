#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string reverseWords(string &s) {
        int i = 0, pre = 0;
        int len = s.length();
        while (i < len) {
            if (s[i] == ' ') {
                reverse(s.begin()+pre, s.begin()+i);
                pre = i+1;
            }
            i++;
        }
        reverse(s.begin()+pre, s.end());
        return s;
    }
};

int main() {
    
}
// Monday, March 07, 2022 | 12:37:23 PM (+06)
