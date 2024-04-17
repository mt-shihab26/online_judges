#include <bits/stdc++.h>
using namespace std;

string reverse(string s)
{
    string ns = "";
    for (char c : s)
    {
        ns = c + ns;
    }
    return ns;
}

string trimLeft(string s)
{
    string ns = "";
    bool isCharFound = false;
    for (char c : s)
    {
        if (!isCharFound && c != ' ')
        {
            isCharFound = true;
        }
        if (isCharFound)
        {
            ns += c;
        }
    }
    return ns;
}

class Solution
{
  public:
    int lengthOfLastWord(string s)
    {
        int l = 0;
        for (char c : trimLeft(reverse(s)))
        {
            cout << c << "\n";
            if (c == ' ')
            {
                break;
            }
            l++;
        }
        return l;
    }
};

int main()
{

    return 0;
};
// github.com/p-nerd (Shihab Mahamud)
// Wednesday, April 17, 2024 | 10:01:13 PM (+6)
