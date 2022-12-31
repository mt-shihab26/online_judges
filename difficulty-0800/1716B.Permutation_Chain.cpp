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

void print(vec<int> a)
{
    int len = a.size();
    for (int i = 1; i < len; i++)
        cout << a[i] << " ";
    cout << ed;
}

bool solve(int ti = 0)
{
    int n;
    cin >> n;
    vec<int> a(n + 1);
    for (int i = 1; i <= n; i++)
        a[i] = i;

    // 1 2 3 4 5 -> 5
    // 1 2 3 5 4 -> 3
    // 4 2 3 5 1 -> 2
    // 4 5 3 2 1 -> 1
    // 4 5 1 2 3 -> 0

    // 1 2 3 4 5 6 7 -> 7
    // 1 2 3 4 5 7 6 -> 5
    // 6 2 3 4 5 7 1 -> 4
    // 6 7 3 4 5 2 1 -> 3
    // 6 7 2 4 5 3 1 -> 2
    // 6 7 2 3 5 4 1 -> 1
    // 6 7 2 3 4 5 1 -> 1

    // 1 2 3 4 5 6 7 -> 7
    // 7 2 3 4 5 6 1 -> 5
    // 7 1 3 4 5 6 2 -> 4
    // 7 1 2 4 5 6 3 -> 3
    // 7 1 2 3 5 6 5 -> 4
    // 7 -> 5 -> 4 -> 3 -> 2 -> 1 -> 0
    // 3 -> 1 -> 0
    cout << n << ed;
    print(a);
    for (int i = 1; i < n; i++)
    {
        swap(a[i], a[n]);
        print(a);
    }

    return true;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t, ti;
    cin >> t;
    for (ti = 0; ti < t; ti++)
    {
        solve(ti);
    }

    // solve();

    return 0;
}
// github.com/shihab4t (Shihab Mahamud)
//