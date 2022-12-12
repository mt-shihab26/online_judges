#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> getAverages(vector<int> &nums, int k)
    {
        int len = nums.size(), start, end, i;
        long long int bh, total_elements;

        vector<long long int> qs(len);
        qs[0] = nums[0];
        for (i = 1; i < len; i++)
        {
            qs[i] = qs[i - 1] + nums[i];
        }
        vector<int> ans(len);
        for (i = 0; i < len; i++)
        {
            start = i - k;
            end = i + k;

            if (start < 0 || len <= end)
            {
                ans[i] = -1;
                continue;
            }
            bh = start <= 0 ? 0 : qs[start - 1];
            total_elements = end - start + 1;
            ans[i] = (qs[end] - bh) / total_elements;
        }
        return ans;
    }
};

int main()
{

    return 0;
};
// github.com/shh26b (Shihab Mahamud)
// // Friday, November 18, 2022 | 05:13:04 AM (+06)
