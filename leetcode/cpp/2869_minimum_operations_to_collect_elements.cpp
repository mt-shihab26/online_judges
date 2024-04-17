#include <bits/stdc++.h>
using namespace std;

class Solution
{
  public:
    int minOperations(vector<int> &nums, int k)
    {
        vector<int> f(k, 0);
        reverse(nums.begin(), nums.end());
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] <= k)
            {
                if (f[nums[i] - 1] == 0)
                {
                    f[nums[i] - 1] = i + 1;
                }
            }
        }
        int mx = 0;
        for (int i = 0; i < k; i++)
        {
            mx = max(f[i], mx);
        }
        return mx;
    }
};

int main()
{

    return 0;
};
// github.com/p-nerd (Shihab Mahamud)
// Thursday, April 18, 2024 | 12:44:17 AM (+6)
