#include <bits/stdc++.h>
using namespace std;

#define ed '\n'
#define gp ' '
#define lli long long int

bool solve()
{
    string su;
    cin >> su;

    transform(su.begin(), su.end(), su.begin(), ::toupper);

    cout << (su == "YES" ? "YES" : "NO") << ed;

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
// // Saturday, July 16, 2022 | 03:59:50 PM (+06)
