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

str a = "YesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYes";

bool solve()
{
    str s;
    cin >> s;

    int n = a.length();
    for (int i = 0; i < n; i++)
        for (int len = 1; len <= n - i; len++)
        {
            if (a.substr(i, len) == s)
            {
                return true;
            }
        }

    return false;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        cout << (solve() ? "YES" : "NO") << ed;
    }

    return 0;
}
// github.com/shh26b (Shihab Mahamud)
//