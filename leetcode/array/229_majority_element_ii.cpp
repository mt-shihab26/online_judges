#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> majorityElement(vector<int> &a)
    {
        map<int, int> mp;
        int len = a.size();
        for (int i = 0; i < len; i++)
        {
            mp[a[i]]++;
        }

        int r = len / 3;

        vector<int> ans;

        for (auto x : mp)
        {
            if (r < x.second)
            {
                ans.push_back(x.first);
            }
        }
        return ans;
    }
};

int main()
{

    return 0;
};
// github.com/p-nerd (Shihab Mahamud)
// Saturday, November 19, 2022 | 09:13:25 PM (+06)
