#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
typedef long double ld;
#define endn "\n"

int main(void)
{
    char ch;
    string str;

    bool flag_1 = true;

    cin >> ch;
    str.push_back(ch);

    while (cin >> ch)
    {
        str.push_back(ch);
        if (ch >= 'a' && ch <= 'z')
        {
            flag_1 = false;
        }
    }

    if (flag_1)
    {
        if (str[0] >= 'a' && ch <= 'z')
            str[0] -= 32;
        else
            str[0] += 32;
        for (int i = 1; i < str.size(); i++)
        {
            str[i] += 32;
        }
    }

    cout << str;
    return 0;
}

// By Shihab Mahamud
// Date: Sunday, June 06, 2021 | 06:53:02 AM (+06)
