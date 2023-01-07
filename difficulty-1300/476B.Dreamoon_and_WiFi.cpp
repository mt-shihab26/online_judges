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

int solve()
{
    str s1, s2;
    cin >> s1 >> s2;

    int p = 0, n1 = s1.length(), n2 = s2.length();
    for (int i = 0; i < n1; i++)
    {
        if (s1[i] == '-')
            p -= 1;
        else
            p += 1;
    }

    vec<int> v;
    v.push_back(0);

    for (int i = 0; i < n2; i++)
    {
        if (s2[i] == '-')
        {
            int ln = v.size();
            for (int j = 0; j < ln; j++)
            {
                v[j] -= 1;
            }
        }
        else if (s2[i] == '+')
        {
            int ln = v.size();
            for (int j = 0; j < ln; j++)
            {
                v[j] += 1;
            }
        }
        else if (s2[i] == '?')
        {
            int ln = v.size();
            for (int j = 0; j < ln; j++)
            {
                int tmp = v[j];
                v[j] += 1;
                v.push_back(tmp - 1);
            }
        }
        // for (int i = 0; i < v.size(); i++) 
        // {
        //     cerr << v[i] << gp;
        // }
        // cerr << ed;
    }

    int ct = 0, ln = v.size();
    for (int i = 0; i < ln; i++)
    {
        if (v[i] == p) 
        {
            ct++;
        }
    }

    double x = ct * 1.0 / ln;

    cout << fixed << setprecision(12) << x << ed;

    return 1;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}
// github.com/shihab4t (Shihab Mahamud)
// Saturday, January 07, 2023 | 12:42:32 PM (+06)
