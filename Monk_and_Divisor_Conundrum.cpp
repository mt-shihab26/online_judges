#include <bits/stdc++.h>
using namespace std;

#define ed '\n'
#define gp ' '
#define ll long long int
#define vec vector
#define str string
#define xbe(x) x.begin(), x.end()

const int mx = 2 * 1e5 + 10;

int ct[mx];
int hs[mx];

void solve()
{
    int n, tmp;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> tmp;
        hs[tmp]++;
    }

    for (int i = 1; i < mx; i++)
    {
        for (int j = i; j < mx; j += i)
        {
            ct[i] += hs[j];
        }
    }

    int qr;
    cin >> qr;
    int p, q;
    while (qr--)
    {
        cin >> p >> q;
        ll x = p * 1ll * q / __gcd(p, q);
        ll ans = ct[p] + ct[q];
        if (x < mx)
        {
            ans -= ct[x];
        }

        cout << ans << ed;
    }
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cerr << boolalpha;
    cout << boolalpha;

    solve();

    return 0;
}

// github.com/p-nerd (Shihab Mahamud)
//