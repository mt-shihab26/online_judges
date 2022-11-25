#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int uniqueMorseRepresentations(vector<string> &words)
    {
        string morse[26] = {".-", "-...", "-.-.", "-..", ".", "..-.", "--.", "....", "..", ".---", "-.-", ".-..", "--", "-.", "---", ".--.", "--.-", ".-.", "...", "-", "..-", "...-", ".--", "-..-", "-.--", "--.."};

        map<char, string> mp;
        set<string> st;

        for (int i = 0; i < 26; i++)
        {
            mp['a' + i] = morse[i];
        }

        for (string word : words)
        {
            string tmp = "";
            for (char c : word)
            {
                tmp += mp[c];
            }
            st.insert(tmp);
        }
        return st.size();
    }
};

int main()
{

    return 0;
};
// github.com/shh26b (Shihab Mahamud)
// Thursday, November 24, 2022 | 10:31:26 PM (+06)
