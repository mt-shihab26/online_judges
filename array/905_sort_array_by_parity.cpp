#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    vector<int> sortArrayByParity(const vector<int>& nums) {
        vector<int> ans;
        for (const int &ith : nums) {
            if (ith % 2 == 0) ans.push_back(ith);
        }
        for (const int &ith : nums) {
            if (ith % 2 == 1) ans.push_back(ith);
        }
        return ans;
    }
};


int main() {
    
}
// Monday, March 07, 2022 | 01:15:19 PM (+06)
