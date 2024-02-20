#include <bits/stdc++.h>
using namespace std;

class Solution
{
    vector<string> split(string str, char spliter)
    {
        vector<string> ans;
        string tmp = "";
        for (char c : str)
        {
            if (c == spliter)
            {
                ans.push_back(tmp);
                tmp = "";
            }
            else
                tmp += c;
        }
        ans.push_back(tmp);
        return ans;
    }

public:
    int numUniqueEmails(vector<string> &emails)
    {
        set<string> st;
        for (string email : emails)
        {
            vector<string> sp = split(email, '@');
            string local_name = "";
            for (char c : sp[0])
            {
                if (c == '+')
                    break;
                if (c != '.')
                    local_name += c;
            }
            st.insert(local_name + '@' + sp[1]);
        }
        return st.size();
    }
};

int main()
{

    return 0;
};
// github.com/p-nerd (Shihab Mahamud)
// Friday, November 25, 2022 | 10:05:22 PM (+06)
