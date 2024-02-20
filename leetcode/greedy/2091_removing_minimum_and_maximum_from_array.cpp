#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int minimumDeletions(const vector<int> &a)
    {
        int mn = INT_MAX, mx = INT_MIN, i;
        int len = a.size(), mn_i, mx_i;

        for (i = 0; i < len; i++)
        {
            if (a[i] < mn)
            {
                mn = a[i];
                mn_i = i;
            }
            if (a[i] > mx)
            {
                mx = a[i];
                mx_i = i;
            }
        }

        int ans = INT_MAX;

        if (mx_i < mn_i)
        {
            ans = min({ans, mx_i + 1 + len - mn_i, len - mx_i});
            ans = min({ans, mn_i + 1});
        }
        else
        {
            ans = min({ans, mn_i + 1 + len - mx_i, len - mn_i});
            ans = min({ans, mx_i + 1});
        }
        return ans;
    }
};

int main()
{

    return 0;
};
// github.com/p-nerd (Shihab Mahamud)
// Friday, November 18, 2022 | 05:45:21 AM (+06)
