#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int findPeakElement(vector<int> &nums)
    {
        int n = nums.size();
        int low = 0, high = n - 1, mid;
        while (low < high)
        {
            mid = (high + low + 1) / 2;
            if (nums[mid - 1] > nums[mid])
            {
                high = mid - 1;
            }
            else
            {
                low = mid;
            }
        }
        return low;
    }
};