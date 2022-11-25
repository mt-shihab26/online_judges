#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string interpret(string command)
    {
        for (int i = 0; i < command.size(); i++)
        {
            if (!(command.compare(i, 2, "()")))
            {
                command.replace(i, 2, "o");
            }
            else if (!(command.compare(i, 4, "(al)")))
            {
                command.replace(i, 4, "al");
            }
        }
        return command;
    }
};