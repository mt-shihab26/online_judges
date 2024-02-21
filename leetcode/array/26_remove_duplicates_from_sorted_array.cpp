#include <bits/stdc++.h>
using namespace std;

class Solution
{
  public:
    int removeDuplicates(vector<int> &nums)
    {
        vector<int> u;

        for (int num : nums)
        {
            if (u.size() == 0 || u.back() != num)
            {
                u.push_back(num);
            }
        }

        for (int i = 0; i < u.size(); i++)
        {
            nums[i] = u[i];
        }

        return (int)u.size();
    }
};

int main()
{

    return 0;
};
// github.com/p-nerd (Shihab Mahamud)
// Wednesday, February 21, 2024 | 05:57:23 PM (+6)
