#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> findDisappearedNumbers(vector<int> &a)
    {
        int n = a.size();
        map<int, bool> mp;
        for (int i = 0; i < n; i++)
        {
            mp[a[i]] = true;
        }
        vector<int> x;
        for (int i = 1; i <= n; i++)
        {
            if (mp[i] == false)
            {
                x.push_back(i);
            }
        }
        return x;
    }
};
