#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int search(vector<int> &nums, int target)
    {
        int n = nums.size();
        int low = 0, high = n - 1, mid;
        while (low <= high)
        {
            mid = low + (high - low) / 2;
            if (nums[mid] == target)
                return mid;
            if ((nums[mid] > nums[n - 1] && target > nums[n - 1]) || (nums[mid] <= nums[n - 1] && target <= nums[n - 1]))
            {
                if (nums[mid] < target)
                    low = mid + 1;
                else
                    high = mid - 1;
            }
            else
            {
                if (nums[mid] > nums[n - 1])
                    low = mid + 1;
                else
                    high = mid - 1;
            }
        }
        return -1;
    }
};

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    return 0;
}
// Shihab Mahamud (github.com/shh26b)
// Monday, June 27, 2022 | 05:05:11 PM (+06)
