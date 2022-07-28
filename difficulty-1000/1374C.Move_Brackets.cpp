#include <bits/stdc++.h>
using namespace std;

#define ed '\n'
#define gp ' '
#define lli long long int
#define vec vector
#define str string
#define all(x) x.begin(), x.end()

const int mod = 1e9 + 7;

bool solve(int ti = 0)
{
    int n, ct = 0;
    cin >> n;
    str s;
    cin >> s;
    cerr << s << ed;
    stack<char> st;

    for (int i = 0; i < n; i++)
    {
        if (s[i] == '(')
            st.push('(');
        else
        {
            if (st.empty())
                s += ')', ct++, n++;
            else
                st.pop();
        }
    }

    cout << ct << ed;
    return true;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t, ti;
    cin >> t;
    for (ti = 0; ti < t; ti++)
    {
        solve(ti);
    }

    return 0;
}
// github.com/shihab4t (Shihab Mahamud)
// Thursday, July 28, 2022 | 10:03:04 PM (+06)
