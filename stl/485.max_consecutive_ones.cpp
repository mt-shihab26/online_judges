#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int mx = 0, len = nums.size(), ct = 0;
        for (int i = 0; i < len; i++) {
            if (nums[i] == 1) {
                ct++;
                mx = max(mx, ct);
            }
            else {
                ct = 0;
            }
        }
        return mx;
    }
};

int main() {
    Solution s;
    vector<int> v = {1,0,1,1,0,1};
    cout << s.findMaxConsecutiveOnes(v);
}
