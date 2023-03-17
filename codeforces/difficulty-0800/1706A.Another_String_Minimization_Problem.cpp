#include <bits/stdc++.h>
using namespace std;

#define ed '\n'
#define gp ' '
#define lli long long int
#define vec vector
#define str string
#define all(x) x.begin(), x.end()

bool solve()
{
    int n, m;
    cin >> n >> m;
    vec<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    vec<char> s(m + 1, 'B');

    for (int i = 0; i < n; i++)
    {
        int ano = m + 1 - a[i];
        int mn = min(ano, a[i]);
        int mx = max(ano, a[i]);

        if (s[mn] == 'B')
            s[mn] = 'A';
        else
            s[mx] = 'A';
    }

    for (int i = 1; i <= m; i++)
    {
        cout << s[i];
    }
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
// github.com/p-nerd (Shihab Mahamud)
//