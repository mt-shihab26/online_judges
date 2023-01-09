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

    vec<int> a(n), b(n);

    int oc = 0, noc = 0, zc = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];

        if (a[i] < 0)
            noc++;
        else if (a[i] > 0)
            oc++;
        else
            zc++;
    }
    for (int i = 0; i < n; i++)
        cin >> b[i];

    for (int i = n - 1; i >= 0; i--)
    {
        int diff = b[i] - a[i];

        if (a[i] < 0)
            noc--;
        else if (a[i] > 0)
            oc--;

        if (diff == 0)
            continue;

        if (diff < 0)
        {
            if (noc <= 0)
                return false;
        }
        else if (diff > 0)
        {
            if (oc <= 0)
                return false;
        }
    }
    return true;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        cout << (solve() ? "YES" : "NO") << ed;
    }

    return 0;
}
// github.com/p-nerd (Shihab Mahamud)
// Thursday, November 17, 2022 | 02:22:47 PM (+06)
