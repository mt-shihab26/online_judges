#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int arithmeticTriplets(vector<int>& nums, int diff) {
        map<int, bool> mp;
        for (int num : nums) 
        {
            mp[num] = true;
        }
        int ct = 0;
        for (int num : nums)
        {
            if (mp[num+diff] && mp[num-diff])
            {
                ct++;
            }
        }
        return ct;
    }
};

int main()
{

    return 0;
};
// github.com/shh26b (Shihab Mahamud)
// Thursday, February 09, 2023 | 08:06:55 PM (+6)