#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int calPoints(vector<string>& ops) {
        vector<int> res;
        
        for (string op : ops) {
            int len = res.size();
            if (op == "+") {
                res.push_back(res[len-1] + res[len-2]);
            } else if (op == "D") {
                res.push_back(res[len-1] * 2);
            } else if (op == "C") {
                res.pop_back();
            } else {
                 res.push_back(stoi(op));
            }
        }
        
        int sum = 0;
        for (int rs : res) {
            sum += rs;
        }
        
        return sum;
    }
};

int main() {
    
}
// by Shihab Mahamud (github.com/shihab4t)
// Monday, April 11, 2022 | 01:51:16 AM (+06)
