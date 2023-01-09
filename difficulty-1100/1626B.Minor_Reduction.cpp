#include <bits/stdc++.h>
using namespace std;

using str = string;
#define endn '\n'

int cint(char c)
{
    return c - '0';
}

void test_case()
{
    str x;
    cin >> x;
    int len = x.size(), p = 0, q = 1, rs = -1, tmp;
    for (int i = 1; i < len; i++)
    {
        tmp = cint(x[i - 1]) + cint(x[i]);
        if (tmp >= 10)
        {
            rs = tmp;
            p = i - 1;
            q = i;
        }
    }

    if (rs == -1)
        rs = cint(x[0]) + cint(x[1]);

    x.erase(p, 2);
    x.insert(p, to_string(rs));
    cout << x << endn;
}

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        test_case();
    }

    return 0;
}
// Solved by: Shihab Mahamud (github.com/p-nerd)
