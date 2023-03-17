#include <bits/stdc++.h>
using namespace std;

#define ed '\n'
#define gp ' '
#define int long long int
#define vec vector
#define str string
#define all(x) x.begin(), x.end()

const int
    mod = 1e9 + 7,
    inf = 1e9;

int solve();
int solve2();

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cerr << boolalpha;
    cout << boolalpha;

    int t;
    cin >> t;
    while (t--)
        solve2();

    return 0;
}

int solve()
{
    int n;
    cin >> n;
    vec<int> a(n + 1), e, o;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] % 2 == 0)
            e.push_back(a[i]);
        else
            o.push_back(a[i]);
    }

    sort(a.begin(), a.end(), greater<int>());
    sort(e.begin(), e.end(), greater<int>());
    sort(o.begin(), o.end(), greater<int>());

    int alice = 0, bob = 0;

    // for (int i = 0; i < e.size(); i++)
    // {
    //     cout << e[i] << gp;
    // }
    // cout << ed;
    // for (int i = 0; i < o.size(); i++)
    // {
    //     cout << o[i] << gp;
    // }
    // cout << ed;

    for (int i = 0, j = 0, k = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            if (j >= e.size() && k < o.size())
            {
                k++;
                continue;
            }
            else if (k >= o.size() && j < e.size())
            {
                alice += e[j];
                j++;
                continue;
            }
            if (e[j] >= o[k])
            {
                cerr << i << gp << j << gp << k << gp << e[j] << gp << o[k] << ed;
                alice += e[j];
                j++;
            }
            else
            {
                k++;
            }
        }
        else
        {
            if (k >= o.size() && j < e.size())
            {
                j++;
                continue;
            }
            else if (j >= e.size() && k < o.size())
            {
                bob += o[k];
                k++;
                continue;
            }
            if (e[j] <= o[k])
            {
                // cerr << i << gp << j << gp << k << gp << e[j] << gp << o[k] << ed;
                bob += o[k];
                k++;
            }
            else
            {
                j++;
            }
        }
    }

    if (alice == bob)
        cout << "Tie" << ed;
    else if (alice > bob)
        cout << "Alice" << ed;
    else
        cout << "Bob" << ed;

    // cout << alice << gp << bob << ed;

    return 1;
}

int solve2()
{
    int n;
    cin >> n;
    vec<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    sort(a.begin(), a.end(), greater<int>());
    int alice = 0, bob = 0;

    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            if (a[i] % 2 == 0)
                alice += a[i];
        }
        else
        {
            if (a[i] % 2 == 1)
                bob += a[i];
        }
    }

    cout << (alice == bob ? "Tie" : alice > bob ? "Alice" : "Bob")<< ed;

    return 1;
}

// github.com/p-nerd (Shihab Mahamud)
// Thursday, February 09, 2023 | 11:44:11 AM (+06)
