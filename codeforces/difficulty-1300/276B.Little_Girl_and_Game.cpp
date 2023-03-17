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

    solve();

    return 0;
}

int solve()
{
    str x;
    cin >> x;
    map<char, int> mp;
    for_each(x.begin(), x.end(), [&](char c)
    { 
        mp[c]++; 
    });
    int oc = 0;
    for_each(mp.begin(), mp.end(), [&](pair<char, int> p)
    {
        if (p.second % 2 == 1){
            oc++;
        } 
    });

    if (oc <= 1 || oc % 2 == 1)
    {
        cout << "First" << ed;
    }
    else
    {
        cout << "Second" << ed;
    }

    return 1;
}

// github.com/p-nerd (Shihab Mahamud)
// Wednesday, February 08, 2023 | 12:51:32 AM (+06)
