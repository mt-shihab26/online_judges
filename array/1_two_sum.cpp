#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int len = nums.size();
        vector<int> ans;
        for (int i = 0; i < len; i++) {
            for (int j = i+1; j < len; j++) {
                if (nums[i] + nums[j] == target) {
                    ans.push_back(i);
                    ans.push_back(j);
                    break;
                }
            }
        }
        return ans;
    }
};

class Solution2 {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int len = nums.size();
        vector<pair<int, int>> inums(len);
        for (int i = 0; i < len; i++) {
            inums[i] = {i, nums[i]};
        }
        
        sort(inums.begin(), inums.end(), [] (pair<int, int> a, pair<int, int> b) -> bool {
            return a.second < b.second; 
        });
        
        
        int i = 0, j = len-1;
        long long int sum;
        while (i < j) {
            sum = inums[i].second + inums[j].second;
            if (sum == target) return {inums[i].first, inums[j].first};
            else if (sum > target) j--;
            else i++;
        }
        
        // for (int i = 0; i < len; i++) {
        //     cout << inums[i].first << " " << inums[i].second << "\n";
        // }
        
        return {-1, -1};
    }
};

int main() {
    
}