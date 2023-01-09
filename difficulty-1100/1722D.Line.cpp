#include <bits/stdc++.h>
using namespace std;

#define ed '\n'
#define gp ' '
#define ll long long int
#define int long long int
#define vec vector
#define str string
#define all(x) x.begin(), x.end()

const int mod = 1e9 + 7;
const int inf = 1e9;

// L L L L L R R R R R
// 0 1 2 3 4 4 3 2 1 0
// 9 8 7 6 5 5 6 7 8 9
// 9 7 5 3 1 1 3 5 7 9
// 9 9 7 7 5 5 3 3 1 1
// 9 18 25 32 37 42 45 48 49 50
// 29 38 45 52 57 62 65 68 69 70

// L L L L L L R R R R R
// 11 / 2
// 5

bool solve()
{
    int n;
    cin >> n;
    str st;
    cin >> st;
    vec<int> line(n);

    int half = n / 2, initial = 0;
    for (int i = 0; i < half; i++)
    {
        if (st[i] == 'L')
        {
            initial += i;
            line[i] = ((n - (i + 1)) - i);
            st[i] = 'R';
        }
        else
        {
            initial += (n - (i + 1));
        }
    }

    // 10 / 2
    // 5
    // 0 1 2 3 4 5 6 7 8 9

    // 11 / 2
    // 5
    // 0 1 2 3 4 5 6 7 8 9 10

    // L R R L L -> 5 - 4

    if (n % 2 == 1)
    {
        initial += half;
        half++;
    }

    for (int i = half; i < n; i++)
    {
        if (st[i] == 'R')
        {
            initial += (n - (i + 1));
            line[i] = (i - (n - i - 1));
            st[i] = 'L';
        }
        else
        {
            initial += i;
        }
    }

    sort(line.begin(), line.end(), greater<int>());
    int len = line.size();
    for (int i = 1; i < len; i++)
    {
        line[i] = line[i] + line[i - 1];
    }

    cerr << n << ": -> " << initial << ": -> ";

    for (int i = 0; i < line.size(); i++)
    {
        cout << initial + line[i] << gp;
    }
    cout << ed;

    // for (int i = 0; i < n; i<< )

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
// github.com/p-nerd (Shihab Mahamud)
// Thursday, September 01, 2022 | 10:12:52 PM (+06)
