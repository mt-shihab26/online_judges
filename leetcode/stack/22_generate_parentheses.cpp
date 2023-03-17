#include <bits/stdc++.h>
using namespace std;

vector<string> valid;
void generate_pa(string &s, int open, int close) {
    if (open == 0 && close == 0) {
        valid.push_back(s);
        return;
    }
    if (open > 0) {
        s.push_back('(');
        generate_pa(s, open - 1, close);
        s.pop_back();
    }
    if (close > 0 && open < close) {
        s.push_back(')');
        generate_pa(s, open, close-1);
        s.pop_back();
    }
}
// Time Complexity: O(2^n
int main(void) {
    int n = 3;
    string s;
    generate_pa(s, n, n);
    
    for (auto v : valid) {
        cout << v << "\n";
    }
}