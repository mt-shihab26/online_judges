#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int mx = 0;
        for (auto ith: accounts) {
            int i_mx = 0;
            for (auto jth: ith) {
                i_mx += jth;
            }
            mx = max(i_mx, mx);
        }
        return mx;
    }
};

int main() {
    
}
// Thursday, December 23, 2021 | 07:56:57 PM (+06)
