#include <bits/stdc++.h>
using namespace std;

#define endn '\n'
inline void first_io()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

int main(void)
{
    first_io();

    string str;
    cin >> str;

    int len = str.length();

    if (str[len - 1] == 'r' && str[len - 2] == 'e')
    {
        cout << "er" << endn;
    }
    else if (str[len - 1] == 't' && str[len - 2] == 's' && str[len - 3] == 'i')
    {
        cout << "ist" << endn;
    }

    return 0;
}
// Solved by: Shihab Mahamud (github.com/shihab4t)
// Thursday, November 18, 2021 | 12:44:54 PM (+06)
