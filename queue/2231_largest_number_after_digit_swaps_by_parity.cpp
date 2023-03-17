#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int largestInteger(int num)
    {
        string num_str = to_string(num);

        while (true)
        {
            bool is = true;
            for (int i = num_str.length() - 1; i >= 0; i--)
            {
                for (int j = 0; j < i; j++)
                {
                    if (num_str[j] < num_str[i] && (num_str[i]) % 2 == (num_str[j] % 2))
                    {
                        swap(num_str[j], num_str[i]);
                        is = false;
                        break;
                    }
                }
            }
            if (is)
            {
                break;
            }
        }
        return stoi(num_str);
    }
};

int main()
{
}
// by Shihab Mahamud (github.com/shh26b)
// Monday, April 11, 2022 | 02:30:21 PM (+06)
