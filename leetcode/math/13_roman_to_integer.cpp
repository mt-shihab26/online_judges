#include <bits/stdc++.h>
using namespace std;

class Solution
{
    int getValue(char c)
    {
        if (c == 'I')
            return 1;
        if (c == 'V')
            return 5;
        if (c == 'X')
            return 10;
        if (c == 'L')
            return 50;
        if (c == 'C')
            return 100;
        if (c == 'D')
            return 500;
        if (c == 'M')
            return 1000;
        return 0;
    }

public:
    int romanToInt(string s)
    {
        int sm = 0, len = s.length();
        for (int i = 1; i < len; i++)
        {
            int crr = getValue(s[i]);
            int prev = getValue(s[i - 1]);

            if (prev < crr)
            {
                sm -= prev;
            }
            else
            {
                sm += prev;
            }
            // cout << sm << " ";
        }
        sm += getValue(s[len - 1]);

        return sm;
    }
};

int main()
{

    return 0;
};
// github.com/shh26b (Shihab Mahamud)
// Tuesday, May 09, 2023 | 01:05:10 PM (+6)