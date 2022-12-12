#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> ans;
        for (auto ith : nums) {
            int ct = 0;
            for (auto jth : nums) {
                if (jth < ith) {
                    ct++;
                }
            }
            ans.push_back(ct);
        }
        return ans;
    }
};

int main() {
    
}
