#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string mergeAlternately(string &word1, string &word2)
    {
        int i, j, len1 = word1.length(), len2 = word2.length();
        string ans = "";
        for (i = 0, j = 0; i < len1 && j < len2; i++, j++)
        {
            ans += word1[i];
            ans += word2[j];
        }
        while (i < len1)
        {
            ans += word1[i++];
        }
        while (j < len2)
        {
            ans += word2[j++];
        }
        return ans;
    }
};

int main()
{
}
