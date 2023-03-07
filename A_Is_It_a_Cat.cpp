#include <bits/stdc++.h>
using namespace std;

#define ed '\n'
#define gp ' '
#define ll long long int
#define vec vector
#define str string
#define xbe(x) x.begin(), x.end()

void solve()
{
    int n;
    cin >> n;
    str s;
    cin >> s;

    transform(s.begin(), s.end(), s.begin(), ::tolower);

    int i = 0;
    int is_m = 0;
    int is_e = 0;
    int is_o = 0;
    int is_w = 0;
    for (; i < n && s[i] == 'm'; i++)
    {
        is_m++;
    }
    for (; i < n && s[i] == 'e'; i++)
    {
        is_e++;
    }
    for (; i < n && s[i] == 'o'; i++)
    {
        is_o++;
    }
    for (; i < n && s[i] == 'w'; i++)
    {
        is_w++;
    }

    if (is_m && is_e && is_o && is_w && i == n)
    {
        cout << "YES" << ed;
    }
    else
    {
        cout << "NO" << ed;
    }
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cerr << boolalpha;
    cout << boolalpha;

    int t;
    cin >> t;
    while (t--)
        solve();

    return 0;
}

// github.com/p-nerd (Shihab Mahamud)
//