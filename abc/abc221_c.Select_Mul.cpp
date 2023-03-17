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

    string n;
    cin >> n;

    sort(n.begin(), n.end());

    int ans = 0;

    while (true)
    {
        for (int i = 1; i < n.size(); i++)
        {
            string le = "", re = "";
            for (int j = 0; j < i; j++)
            {
                le += n[j];
            }
            for (int j = i; j < n.size(); j++)
            {
                re += n[j];
            }
            if (le[0] != '0' && re[0] != '0')
            {
                ans = max(ans, stoi(le) * stoi(re));
            }
        }
        if (!next_permutation(n.begin(), n.end()))
        {
            break;
        }
    }

    cout << ans << endn;

    return 0;
}
// Solved by: Shihab Mahamud (github.com/shihab4t)
