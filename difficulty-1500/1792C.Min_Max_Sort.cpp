#include <bits/stdc++.h>
using namespace std;

#define ed '\n'
#define gp ' '
#define ll long long int
#define vec vector
#define str string
#define all(x) x.begin(), x.end()

const int
    mod = 1e9 + 7,
    inf = 1e9;

int solve();

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cerr << boolalpha;
    cout << boolalpha;

    int t;
    cin >> t;
    while (t--)
        solve();

    return 0;
}

int solve()
{
    int n, x;
    cin >> n;
    vector<int> where(n + 1);
    for (int i = 1; i <= n; i++)
    {
        cin >> x;
        where[x] = i;
    }
    if (n == 1)
    {
        cout << "0\n";
        return 1;
    }
    int l = (n + 1) / 2;
    int r = (n + 2) / 2;
    int ans = (n + 1) / 2;

    while (l >= 1 && (l == r || (where[l] < where[l + 1] && where[r - 1] < where[r])))
    {
        l--;
        r++;
        ans--;
    }
    cout << ans << ed;

    return 1;
}

// github.com/p-nerd (Shihab Mahamud)
//