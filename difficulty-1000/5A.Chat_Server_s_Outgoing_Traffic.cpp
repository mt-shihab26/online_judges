#include <bits/stdc++.h>
using namespace std;

#define endn "\n"

// Solve
int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string line;
    map<string, int> members;
    int total = 0;

    while (getline(cin, line))
    {
        if (line[0] == '+')
        {
            members[line.substr(1, line.size() - 1)]++;
        }
        else if (line[0] == '-')
        {
            members.erase(line.substr(1, line.size() - 1));
        }
        else
        {
            auto po = line.find(':');
            line = line.substr(po + 1);
            total += line.size() * members.size();
        }
    }

    cout << total << endn;

    return 0;
}
// Solved By: shihab4t
// Thursday, July 08, 2021 | 07:27:00 AM (+06)
