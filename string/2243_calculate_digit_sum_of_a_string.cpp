#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string digitSum(string s, int k)
    {
        while (s.length() > k)
        {
            int len = s.length();
            string _sum = "";
            for (int i = 0; i < len; i += k)
            {
                int sum = 0;
                int last = i + k > len ? len : i + k;
                for (int j = i; j < last; j++)
                {
                    sum += (s[j] - '0');
                }
                _sum += to_string(sum);
            }
            s = _sum;
            cout << s << "\n";
        }
        return s;
    }
};

int main()
{
}
// by Shihab Mahamud (github.com/shh26b)
// Sunday, April 17, 2022 | 02:50:12 PM (+06)
