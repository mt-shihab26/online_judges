#include <bits/stdc++.h>
using namespace std;

typedef long long int lli;
#define endn "\n"

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string s, t;
    cin >> s >> t;
    int i, j, ct = 0;
    for (i = s.length() - 1, j = t.length() - 1; i >= 0 && j >= 0; i--, j--)
    {
        if (s[i] != t[j])
        {
            break;
        }
    }

    ct = (i + 1) + (j + 1);
    cout << ct << endn;

    return 0;
}
// Solved By: p-nerd
// Saturday, June 26, 2021 | 12:22:43 AM (+06)
