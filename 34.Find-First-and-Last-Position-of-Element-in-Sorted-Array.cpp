#include <bits/stdc++.h>
using namespace std;

class Solution {
    int lower_bound(const vector<int> & nums, int target) {
        int low = 0, high = nums.size()-1, got_it = -1, mid;
        while (low <= high) {
            mid = low + (high - low) / 2;
            if (nums[mid] == target) {
                got_it = mid;
                high = mid - 1;
            }
            else if (nums[mid] > target) {
                high = mid - 1;
            }
            else {
                low = mid + 1;
            }
        }
        return got_it;
    }
    int upper_bound(const vector<int> &nums, int target) {
        int low = 0, high = nums.size()-1, got_it = nums.size(), mid;
        while (low <= high) {
            mid = low + (high - low) / 2;
            if (nums[mid] > target) {
                got_it = mid;
                high = mid - 1;
            }
            else {
                low = mid + 1;
            }
        }
        return got_it;
    }
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> rs;
        int lw = lower_bound(nums, target);
        int up = upper_bound(nums, target);
        cout << lw << " " << up << endl;
        
        rs.push_back(lw);
        if (lw == -1)
            rs.push_back(-1);
        else 
            rs.push_back(up-1);
        return rs;
    }
};


int main() {

}