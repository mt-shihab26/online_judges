#include <bits/stdc++.h>
using namespace std;

#define ed '\n'
#define gp ' '
#define ll long long int
#define vec vector
#define str string
#define xbe(x) x.begin(), x.end()

template <typename T>
void print(ostream &stream, const vec<T> &v)
{
    for (const auto &e : v)
        stream << e << gp;
    stream << ed;
}

void solve()
{
    int n, m;
    cin >> n >> m;

    char a[n][m];

    for (int i = 0; i < n; i++) 
    {
        for (int j = 0; j < m; j++) 
        {
            cin >> a[i][j];
        }
    }

    int valid[4] =  {'v', 'i', 'k', 'a'};

    int x = 0;

    for (int i = 0; i < m; i++) 
    {
        for (int j = 0; j < n; j++) 
        {
            if (a[j][i] == valid[x]) 
            {
                // cerr << a[j][i] << " "; 
                x++;
                break;
            }
        }
    }

    // cerr << x << ed;

    if (x == 4) 
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

// developershihab.com
// github.com/p-nerd
// Monday, August 28, 2023 | 05:34:52 AM (+06)
