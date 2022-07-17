#include <bits/stdc++.h>
using namespace std;

#define ed '\n'
#define gp ' '
#define lli long long int
#define vec vector
#define str string

bool solve()
{
    str lr[2];
    int in = 0;

    str s;
    cin >> s;
    int len = s.length();
    for (int i = 0; i < len; i++)
    {
        if (s[i] == '^')
            in = 1;
        else
            lr[in] += s[i];
    }

    lli left_ct = 0, right_ct = 0;

    for (int i = lr[0].length() - 1, j = 1; i >= 0; i--, j++)
    {
        if (lr[0][i] != '=')
            left_ct += (lr[0][i] - '0') * j;
    }

    len = lr[1].length();
    for (int i = 0, j = 1; i < len; i++, j++)
    {
        if (lr[1][i] != '=')
            right_ct += (lr[1][i] - '0') * j;
    }

    if (left_ct > right_ct)
        cout << "left\n";
    else if (left_ct < right_ct)
        cout << "right\n";
    else
        cout << "balance\n";

    return true;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}
// github.com/shihab4t (Shihab Mahamud)
// Sunday, July 17, 2022 | 12:52:51 PM (+06)
