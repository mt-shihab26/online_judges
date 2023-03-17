#include <bits/stdc++.h>
using namespace std;

#define ed '\n'
#define gp ' '
#define lli long long int
#define vec vector
#define str string

bool solve()
{
    int n, ct = 0;
    cin >> n;

    bool a[95]; // a[65] = true;
    for (int i = 0; i < 95; i++)
        a[i] = false;

    char c;
    for (int i = 0; i < n; i++)
    {
        cin >> c;
        ct++;
        if (a[c] == false)
        {
            ct++;
            a[c] = true;
        }
    }

    cout << ct << ed;

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
// Saturday, July 16, 2022 | 03:15:45 PM (+06)
