#include <bits/stdc++.h>
using namespace std;

#define endn '\n'

void test()
{
    string cmd, url;
    stack<string> forward, backward;
    string current = "http://www.lightoj.com/";
    while (cin >> cmd)
    {
        if (cmd == "QUIT")
            return;

        if (cmd == "VISIT")
        {
            cin >> url;
            while (!forward.empty())
            {
                forward.pop();
            }
            backward.push(current);
            current = url;
            cout << current << endn;
        }
        else if (cmd == "BACK")
        {
            if (backward.size() > 0)
            {
                forward.push(current);
                current = backward.top();
                backward.pop();
                cout << current << endn;
            }
            else
            {
                cout << "Ignored" << endn;
            }
        }
        else if (cmd == "FORWARD")
        {
            if (forward.size() > 0)
            {
                backward.push(current);
                current = forward.top();
                forward.pop();
                cout << current << endn;
            }
            else
            {
                cout << "Ignored" << endn;
            }
        }
    }
}

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t, i = 1;
    cin >> t;
    while (t--)
    {
        cout << "Case " << i << ":" << endn;
        test();
        i++;
    }
}
// Solved By: shh26b
// Monday, August 16, 2021 | 08:44:42 AM (+06)
// Accepted: 09:11:05 AM (+06)
