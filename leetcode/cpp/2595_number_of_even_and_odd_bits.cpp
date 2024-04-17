#include <bits/stdc++.h>
using namespace std;

class Solution
{
  public:
    vector<int> evenOddBit(int n)
    {
        int i = 0, even = 0, odd = 0;
        while (n)
        {
            int bit = n % 2;
            if (bit == 1)
            {
                if (i % 2 == 0)
                {
                    even++;
                }
                else
                {
                    odd++;
                }
            }
            i++;
            n /= 2;
        }
        return {even, odd};
    }
};

int main()
{

    return 0;
};
// github.com/p-nerd (Shihab Mahamud)
// Wednesday, April 17, 2024 | 11:22:57 PM (+6)
