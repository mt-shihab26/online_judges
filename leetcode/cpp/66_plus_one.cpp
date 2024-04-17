#include <bits/stdc++.h>
using namespace std;

class Solution 
{
public:
    vector<int> plusOne(vector<int>& digits) {
        int len = digits.size(), nct = 0;
        for (int i = len-1; i >= 0; i--)
        {
            if (digits[i] == 9) 
                nct++;
            else
                break;
        }
        int x = len - nct - 1;
        if (nct == len)
        {
            digits[0] = 1;
            digits.push_back(0);
            x += 1;
        }
        else 
        {
            digits[x] = digits[x] + 1;
        }
        for (int i = x+1; i < len; i++)
            digits[i] = 0;


        return digits;
    }
};

int main()
{

    return 0;
};
// github.com/p-nerd (Shihab Mahamud)
// Sunday, November 27, 2022 | 12:20:51 AM (+06)
