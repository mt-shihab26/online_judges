#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mx = 0;
        int len = prices.size();
        int mn = prices[0];

        for (int i = 1; i < len; i++) 
        {
            mx = max(mx, prices[i] - mn);
            mn = min(mn, prices[i]);
        }

        return mx;
    }
};

int main()
{

    return 0;
};
// github.com/shh26b (Shihab Mahamud)
// Thursday, September 07, 2023 | 10:04:06 AM (+6)