#include <bits/stdc++.h>
using namespace std;

#define ed '\n'
#define gp ' '
#define lli long long int
#define vec vector
#define str string

bool solve()
{
    int n;
    cin >> n;

    vec<int> a(n);
    map<int, vec<int>> mp;
    map<int, int> out;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        mp[a[i]].push_back(i);
        out[i + 1] = 0;
    }

    for (auto x : mp)
    {
        int len = x.second.size();
        out[x.first] = 1;

        bool even = false;

        if (x.second[0] % 2 == 0)
            even = true;

        for (int i = 1; i < len; i++)
        {
            if (even && x.second[i] % 2 == 1)
            {
                out[x.first]++;
                even = false;
            }
            else if (!even && x.second[i] % 2 == 0)
            {
                out[x.first]++;
                even = true;
            }
        }
    }

    for (auto x : out)
        cout << x.second << " ";

    cout << ed;

    return true;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    // solve();

    return 0;
}
// github.com/shh26b (Shihab Mahamud)
// Wednesday, July 20, 2022 | 06:18:25 PM (+06)
