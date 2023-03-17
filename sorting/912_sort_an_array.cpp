#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void marge_sort(vector<int> &nums, int start, int end) {
        if (start == end)return;

        int mid_indx = start + ((end - start) / 2);

        marge_sort(nums, start, mid_indx);
        marge_sort(nums, mid_indx + 1, end);

        // start to mid_indx, mid_indx+1 to end
        int len = end - start + 1;
        int marged_array[len];

        int first_half = start, second_half = mid_indx+1;

        for (int i = 0; i < len; i++) {
            if (first_half > mid_indx) {
                marged_array[i] = nums[second_half++];
            }
            else if (second_half > end) {
                marged_array[i] = nums[first_half++];
            }
            else if (nums[first_half] < nums[second_half]) {
                marged_array[i] = nums[first_half++];
            } else {
                marged_array[i] = nums[second_half++];
            }
        }

        for (int i = 0, j = start; i < len; i++) {
            nums[j++] = marged_array[i];
        }
    } 
    vector<int> sortArray(vector<int>& nums) {
        marge_sort(nums, 0, nums.size()-1);
        return nums;
    }
};

int main() {
    
}
// Thursday, December 02, 2021 | 07:59:45 PM (+06)
