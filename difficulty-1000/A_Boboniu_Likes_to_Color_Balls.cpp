#include <bits/stdc++.h>
using namespace std;

#define ed '\n'
#define gp ' '
#define ll long long int
#define vec vector
#define str string
#define all(x) x.begin(), x.end()
#define int long long int

const int mod = 1e9 + 7;
const int inf = 1e9;

/*
    3 * 3 => 9
    3 * 2 => 6

    // 0 1 1 1 -> odd: 3 , even: 1

    // 7 1 9 3 -> odd: 3 , even: 0 -> 6 0 8 6 -> yes
    // 8 1 9 3 -> odd: 2 , even: 1 -> 7 0 8 6 -> yes
    // 8 2 3 3 -> odd: 1 , even: 2 -> 7 1 2 6 -> no
    // 8 2 4 3 -> odd: 0 , even: 3 -> 7 1 3 6 -> no

    // 7 1 9 2 -> odd: 3 , even: 0 -> 6 0 8 5 -> yes
    // 8 1 9 2 -> odd: 2 , even: 1 -> 7 0 8 5 -> no
    // 8 2 3 2 -> odd: 1 , even: 2 -> 7 1 2 5 -> no
    // 8 2 4 2 -> odd: 0 , even: 3 -> 7 1 3 5 -> no
*/

bool solve()
{
    vec<int> a(4);
    int mn = INT_MAX;

    int even_ct = 0;

    for (int i = 0; i < 4; i++)
    {
        cin >> a[i];
        if (a[i] % 2 == 0)
            even_ct++;
    }

    if (even_ct >= 3)
    {
        cout << "Yes" << ed;
        return 0;
    }

    for (int i = 0; i < 3; i++)
    {
        int tmp = a[i] - 1;
        if (tmp < 0)
            even_ct = -4;

        if (tmp % 2 == 0)
            even_ct++;
    }
    if ((a[3] + 3) % 2 == 0)
        even_ct++;

    cerr << even_ct << ed;

    cout << (even_ct >= 3 ? "Yes" : "No") << ed;
    return true;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
        solve();

    return 0;
}
// github.com/shihab4t (Shihab Mahamud)
// Tuesday, August 16, 2022 | 11:56:35 AM (+06)
