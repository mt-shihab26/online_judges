#include <bits/stdc++.h>
using namespace std;

class Solution
{

public:
    int countPrimes(int n)
    {
        int ct = 0;
        vector<bool> is_primes(n);
        for (int i = 2; i < n; i++)
        {
            if (is_primes[i] == false)
            {
                ct++;
                for (int j = i + i; j < n; j += i)
                {
                    is_primes[j] = true;
                }
            }
        }

        return ct;
    }
};

int main()
{

    return 0;
};
// github.com/shh26b (Shihab Mahamud)
// Friday, February 24, 2023 | 02:04:13 AM (+6)