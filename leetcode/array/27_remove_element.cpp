#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int removeElement(vector<int> &nums, int val)
    {
        auto newEnd = remove(nums.begin(), nums.end(), val);
        nums.erase(newEnd, nums.end());
        return nums.size();
    }
};

int main()
{

    return 0;
};
// github.com/p-nerd (Shihab Mahamud)
// Tuesday, May 09, 2023 | 01:21:37 PM (+6)