#include <bits/stdc++.h>
using namespace std;

#define ed '\n'
#define gp ' '
#define ll long long int
#define vec vector
#define str string
#define xbe(x) x.begin(), x.end()

void solve()
{
    int n;
    cin >> n;
    vec<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    priority_queue<int> pq;

    ll ct = 0;

    for (int i = 0; i < n; i++)
    {
        if (a[i] == 0)
        {
            if (!pq.empty())
            {
                ct += pq.top();
                pq.pop();
            }
        }
        else
        {
            pq.push(a[i]);
        }
    }

    cout << ct << ed;
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

// github.com/p-nerd (Shihab Mahamud)
//