#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int strStr(string haystack, string needle)
    {
        int len_s = haystack.length();
        int len_n = needle.length();

        for (int i = 0; i < len_s; i++)
        {
            for (int j = i; j < len_s; j++)
            {
                int ln = j - i + 1;
                if (ln == len_n)
                {
                    string sub = haystack.substr(i, ln);
                    if (sub == needle)
                        return i;
                }
            }
        }
        return -1;
    }
};

int main()
{

    return 0;
};
// github.com/shh26b (Shihab Mahamud)
// Friday, November 25, 2022 | 09:06:20 PM (+06)
