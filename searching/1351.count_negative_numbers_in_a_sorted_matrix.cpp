#include <bits/stdc++.h>
using namespace std;

#define endn '\n'

class Solution {
    int negatives_upper_bound(vector<int> &x) {
        int vl = 0, low = 0, high = x.size()-1, mid, ans = x.size();
        
        while (low <= high) {
            mid = low + (high - low) / 2;
            if (x[mid] < vl) {
                ans = mid;
                high = mid - 1;
            }
            else {
                low = mid+1;
            }
        }
        return ans;
    }
public:
    int countNegatives(vector<vector<int>>& grid) {
        int sum = 0, tmp;
        for (int i = 0; i < grid.size(); i++) {
            tmp = negatives_upper_bound(grid[i]);
            sum +=  grid[i].size() - tmp;
        }
        return sum;
    }
};
