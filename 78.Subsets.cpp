#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> all_subset;
void generate(vector<int> &subset, int i, vector<int> &nums) {
    if (i == nums.size()) {
        all_subset.push_back(subset);    
        return;
    }
    
    // ith element not in subset
    generate(subset, i+1, nums);

    // ith element in subset
    subset.push_back(nums[i]);
    generate(subset, i+1, nums);
    subset.pop_back();
}

// Time Complexity: O(2^n)

int main(void) {
    vector<int> nums = {1, 2, 3};
    int n = 3;
    vector<int> empty;
    generate(empty, 0, nums);

    for (auto subset : all_subset) {
        for (auto ele : subset) {
            cout << ele << " ";
        }
        cout << "\n";
    }
}