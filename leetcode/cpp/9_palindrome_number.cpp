#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool isPalindrome(int x)
    {
        string x_str = to_string(x);

        for (int i = 0, j = x_str.length() - 1; i < j; i++, j--)
        {
            if (x_str[i] != x_str[j])
            {
                return false;
            }
        }

        return true;
    }
};

int main()
{
}
// by Shihab Mahamud (github.com/p-nerd)
// Monday, April 11, 2022 | 02:12:50 AM (+06)
