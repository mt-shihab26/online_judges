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

#define MAX 10000001
bool is_not_prime2[MAX + 10];
vector<long long int> primes;
void sieve(int n)
{
    int i, j;
    is_not_prime2[1] = true;

    primes.push_back(2);
    for (i = 4; i <= n; i += 2)
        is_not_prime2[i] = true;

    int root = sqrt(n);
    for (i = 3; i <= n; i += 2)
    {
        if (is_not_prime2[i] == false)
        {
            primes.push_back(i);
            if (i <= root)
            {
                for (j = i * i; j <= n; j += 2 * i)
                {
                    is_not_prime2[j] = true;
                }
            }
        }
    }
    // O(n * log log n)
}
bool solve()
{
    ll x;
    cin >> x;

    int p1 = 0, p2 = 0;

    int len = primes.size(), i;
    for (i = 0; i < len; i++)
    {
        if (primes[i] - 1 >= x)
        {
            p1 = primes[i];
            break;
        }
    }

    for (; i < len; i++)
    {
        if (primes[i] - p1 >= x)
        {
            p2 = primes[i];
            break;
        }
    }

    cout << p1 * p2 << ed;

    return true;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    sieve(10000001);

    int t;
    cin >> t;
    while (t--)
        solve();

    return 0;
}
// github.com/shh26b (Shihab Mahamud)
// Saturday, October 22, 2022 | 02:32:52 PM (+06)
