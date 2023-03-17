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

vector<int> divisors(int n)
{
    vector<int> a;
    int root = sqrt(n);
    for (int i = 1; i <= root; i++)
    {
        if (n % i == 0)
        {
            a.push_back(i);
            if (n / i != i)
                a.push_back(n / i);
        }
    }
    return a;
}

int solve()
{
    int n;
    cin >> n;
    if (n % 2 == 0)
    {
        cout << n / 2 << gp << n / 2 << ed;
        return 1;
    }

    auto x = divisors(n);
    sort(all(x));
    int t = x[x.size() - 2];
    cout << t << gp << n - t << ed;

    return 1;
}

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
// github.com/p-nerd (Shihab Mahamud)
// Friday, January 13, 2023 | 07:56:22 AM (+06)
// AC: Friday, January 13, 2023 | 09:03:41 AM (+06)
