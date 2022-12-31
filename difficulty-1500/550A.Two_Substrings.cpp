#include <bits/stdc++.h>
using namespace std;

#define ed '\n'
#define gp ' '
#define ll long long int
#define vec vector
#define str string
#define all(x) x.begin(), x.end()

const int mod = 1e9 + 7;
const int inf = 1e9;

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    str s;
    cin >> s;
    int len = s.size();
    pair<int, int> ab, ba;
    ab = {-1, -1};
    ba = {-1, -1};
    for (int i = 1; i < len; i++)
    {
        if (s[i - 1] == 'A' && s[i] == 'B')
        {
            ab = {i - 1, i};
            i++;
        }
        if (s[i - 1] == 'B' && s[i] == 'A')
        {
            ba = {i - 1, i};
            i++;
        }
    }

    str ans = ab.first >= 0 && ab.second >= 0 && ba.first >= 0 && ba.second >= 0 &&
                      ab.second != ba.first && ab.first != ba.second
                  ? "YES"
                  : "NO";

    if (ans == "NO")
    {
        ab = {-1, -1};
        ba = {-1, -1};

        for (int i = 1; i < len; i++)
        {
            if (s[i - 1] == 'B' && s[i] == 'A')
            {
                ba = {i - 1, i};
                i++;
            }
            if (s[i - 1] == 'A' && s[i] == 'B')
            {
                ab = {i - 1, i};
                i++;
            }
        }
    }

    // cerr << ab.first << ab.second << ed;
    // cerr << ba.first << ba.second << ed;

    ans = ab.first >= 0 && ab.second >= 0 && ba.first >= 0 && ba.second >= 0 &&
                  ab.second != ba.first && ab.first != ba.second
              ? "YES"
              : "NO";

    cout << ans << ed;

    return 0;
}
// github.com/shihab4t (Shihab Mahamud)
// Sunday, August 21, 2022 | 02:47:38 PM (+06)
