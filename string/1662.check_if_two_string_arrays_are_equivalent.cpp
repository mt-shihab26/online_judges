#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool arrayStringsAreEqual(vector<string> &word1, vector<string> &word2)
    {
        string st1, st2;
        for (auto ith : word1)
        {
            st1 += ith;
        }
        for (auto ith : word2)
        {
            st2 += ith;
        }

        return st1 == st2;
    }
};

int main()
{
}
