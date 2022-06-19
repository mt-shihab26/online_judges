#include <bits/stdc++.h>
using namespace std;


class Solution {
    template<typename Tp>
    int binary_search(const vector<Tp> &arr, Tp tg) {
        int low = 0, high = arr.size() - 1, mid;
        
        int ans = -1;

        while (low <= high) {
            mid = low + (high - low) / 2;
            if (arr[mid] == tg) {
                return mid;
            }
            if (arr[mid] > tg) {
                high = mid - 1;
            }
            else {
                ans = mid + 1;
                low = mid + 1;
            }
            cout << ans << " ";
        }
        return ans;
    }
public:
    int searchInsert(vector<int>& nums, int target) {
        int rs = binary_search(nums, target);
        
        if (rs == -1) rs = 0;
        return rs;
    }
};

int main() {
    
}
// Solved by: Shihab Mahamud (github.com/shihab4t)
// Wednesday, October 06, 2021 | 04:06:27 PM (+06)
