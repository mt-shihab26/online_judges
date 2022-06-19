#include <bits/stdc++.h>
using namespace std;

class Solution {
    void f(vector<char> &s, int i, int j) {
        if (i >= j) return;
        swap(s[i], s[j]);
        f(s, i+1, j-1);
        return;
    }
public:
    void reverseString(vector<char>& s) {
        f(s, 0, s.size()-1);
    }
};

int main() {
    
}
// Solved by: Shihab Mahamud (github.com/shihab4t)
