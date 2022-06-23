#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> targetIndices(vector<int> &nums, int target)
    {
        sort(nums.begin(), nums.end());
        int ct = 0, len = nums.size(), first = -1;
        for (int i = 0; i < len; i++)
        {
            if (nums[i] == target)
            {
                ct++;
                if (first == -1)
                {
                    first = i;
                }
            }
        }
        vector<int> ans;
        for (int i = 1, j = first; i <= ct; i++, j++)
        {
            ans.push_back(j);
        }
        return ans;
    }
};

int main()
{
}