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

    string s1, s2, s3;
    cin >> s1 >> s2 >> s3;
    string t;
    cin >> t;

    int len = t.length();

    for (int i = 0; i < len; i++)
    {
        int d = int(t[i] - '0');
        if (d == 1)
        {
            cout << s1;
        }
        else if (d == 2)
        {
            cout << s2;
        }
        else if (d == 3)
        {
            cout << s3;
        }
    }
    cout << endn;

    return 0;
}
// Solved by: Shihab Mahamud (github.com/shihab4t)
