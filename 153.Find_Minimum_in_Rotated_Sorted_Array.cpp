#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int findMin(vector<int> &nums)
    {
        int n = nums.size();
        int low = 0, high = n - 1, mid;
        while (low < high)
        {
            mid = low + (high - low) / 2;
            if (nums[mid] > nums[n - 1])
                low = mid + 1;
            else
                high = mid;
        }
        return nums[low];
    }
};

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    return 0;
}
// Shihab Mahamud (github.com/shihab4t)
// Monday, June 27, 2022 | 02:32:28 PM (+06)
