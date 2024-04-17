#include <bits/stdc++.h>
using namespace std;

#define ed '\n'

class Solution
{
public:
    string addBinary(string a, string b)
    {
        int len_a = a.length();
        int len_b = b.length();
        int tmp, i, x, y;

        if (len_a < len_b)
        {
            tmp = len_b - len_a;
            while (tmp--)
                a = '0' + a;
        }
        else if (len_b < len_a)
        {
            tmp = len_a - len_b;
            while (tmp--)
                b = '0' + b;
        }

        len_a = a.length();
        len_b = b.length();

        bool carry = 0;
        string ans;

        for (i = len_a - 1; i >= 0; i--)
        {
            x = a[i] - '0', y = b[i] - '0';
            tmp = x + y + carry;
            char c;

            if (tmp == 3)
            {
                c = '1';
                carry = 1;
            }
            else if (tmp == 2)
            {
                c = '0';
                carry = 1;
            }
            else if (tmp == 1)
            {
                c = '1';
                carry = 0;
            }
            else
            {
                c = '0';
                carry = 0;
            }
            cout << c << " ";
            ans = c + ans;
        }
        if (carry == 1)
        {
            ans = '1' + ans;
        }

        return ans;
    }
};

int main()
{

    return 0;
};
// github.com/p-nerd (Shihab Mahamud)
// Thursday, November 24, 2022 | 11:34:16 PM (+06)
