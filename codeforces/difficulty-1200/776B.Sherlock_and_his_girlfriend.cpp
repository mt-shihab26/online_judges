#include <bits/stdc++.h>
using namespace std;

#define ed '\n'
#define gp ' '
#define ll long long int
#define vec vector
#define str string
#define xbe(x) x.begin(), x.end()

const int mx = 100000 + 5;
vector<bool> is_primes(mx + 1);
void sieve()
{
    int i, j;
    is_primes[1] = true;

    for (int i = 4; i <= mx; i += 2)
        is_primes[i] = true;

    int root = sqrt(mx + 1) + 2;

    for (int i = 3; i <= mx; i += 2)
    {
        if (is_primes[i] == false)
        {
            if (i <= root)
            {
                for (int j = i * i; j <= mx; j += i)
                    is_primes[j] = true;
            }
        }
    }
}

void solve()
{
    int n;
    cin >> n;
    cout << (n <= 2 ? 1 : 2) << ed;
    for (int i = 2; i <= n + 1; i++)
    {
        cout << (is_primes[i] == false ? 1 : 2) << gp;
    }
    cout << ed;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cerr << boolalpha;
    cout << boolalpha;

    sieve();
    solve();

    return 0;
}

// github.com/p-nerd (Shihab Mahamud)
// Friday, February 24, 2023 | 02:32:26 AM (+06)
