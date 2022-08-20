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

    string s, t;
    cin >> s >> t;

    if (s == t)
    {
        cout << "Yes" << endn;
    }
    else
    {
        int len = s.length();
        for (int i = 0; i < len - 1; i++)
        {
            if (s[i] != t[i])
            {
                swap(s[i], s[i + 1]);
                break;
            }
        }
        if (s == t)
        {
            cout << "Yes" << endn;
        }
        else
        {
            cout << "No" << endn;
        }
    }

    return 0;
}
// Solved by: Shihab Mahamud (github.com/shihab4t)
