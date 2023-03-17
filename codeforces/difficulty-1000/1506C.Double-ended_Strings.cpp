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

vec<str> sub_strings(str s)
{
    vec<str> subs;
    int n = s.length();
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            str tmp = "";
            for (int k = i; k <= j; k++)
                tmp += s[k];
            // cerr << tmp << ed;
            subs.push_back(tmp);
        }
    }
    // cerr << ed;
    return subs;
}

bool solve()
{
    str a, b;
    cin >> a >> b;

    vec<str> subs_a = sub_strings(a);
    vec<str> subs_b = sub_strings(b);
    vec<str> ans;

    int len_a = subs_a.size(), len_b = subs_b.size(), i, j;

    for (i = 0; i < len_a; i++)
        for (j = 0; j < len_b; j++)
            if (subs_a[i] == subs_b[j])
                ans.push_back(subs_a[i]);

    int mx = INT_MIN, len;
    for (i = 0; i < ans.size(); i++)
    {
        len = ans[i].length();
        mx = max(mx, len);
    }
    int ct = (a.length() - mx) + (b.length() - mx);
    cout << ct << ed;

    return true;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
        solve();

    return 0;
}
// github.com/p-nerd (Shihab Mahamud)
// Friday, November 18, 2022 | 12:31:08 PM (+06)
