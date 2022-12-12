#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> nums1_copy(m+1);
        vector<int> nums2_copy(n+1);
            
        for (int i = 0; i < m; i++) {
            nums1_copy[i] = nums1[i];
        }
        for (int i = 0; i < n; i++) {
            nums2_copy[i] = nums2[i];
        }
        nums1_copy[m] = nums2_copy[n] = INT_MAX;
        
        int nums1_indx = 0, nums2_indx = 0;
        for (int i = 0; i < m+n; i++) {
            if (nums1_copy[nums1_indx] <= nums2_copy[nums2_indx]) {
                nums1[i] = nums1_copy[nums1_indx];
                nums1_indx++;
            }
            else {
                nums1[i] = nums2_copy[nums2_indx];
                nums2_indx++;
            }
        }
    }
};

int main() {
    
}