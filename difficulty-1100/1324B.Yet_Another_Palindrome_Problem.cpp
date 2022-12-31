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

bool solve()
{
    int n;
    cin >> n;

    vec<int> a(n + 1);
    for (int i = 1; i <= n; i++)
        cin >> a[i];

    for (int i = 1; i <= n; i++)
        for (int j = n; j >= 1; j--)
            if (a[i] == a[j] && (j - i) >= 2)
                return true;

    return false;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
        cout << (solve() ? "YES" : "NO") << ed;

    return 0;
}
// github.com/shihab4t (Shihab Mahamud)
// Monday, September 26, 2022 | 02:12:06 PM (+06)
