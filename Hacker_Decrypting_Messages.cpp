#include <bits/stdc++.h>
using namespace std;

#define ed '\n'
#define gp ' '
#define ll long long int
#define vec vector
#define str string
#define xbe(x) x.begin(), x.end()

const int mx = 1e6 + 5;
vector<bool> is_primes(mx + 1);
vector<int> highest_primes(mx + 1, 0);

void sieve()
{
    int i, j;
    is_primes[1] = true;
    for (int i = 2; i <= mx; i++)
    {
        if (is_primes[i] == false)
        {
            highest_primes[i] = i;
            for (int j = i * 2; j <= mx; j += i)
            {
                is_primes[j] = true;
                highest_primes[j] = i;
            }
        }
    }
    // O(n * log(log(n)))
}

vec<int> prime_factors(int n)
{
    vec<int> pf;
    while (n > 1)
    {
        int prime_factor = highest_primes[n];
        while (n % prime_factor == 0)
            n /= prime_factor;
        pf.push_back(prime_factor);
    }
    return pf;
    // O(log n)
}

vec<bool> can_remove(mx + 1);

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cerr << boolalpha;
    cout << boolalpha;

    sieve();

    int n, q, x;
    cin >> n >> q;
    vec<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        can_remove[x] = true;
    }
    for (int i = 2; i < mx; i++)
    {
        if (can_remove[i])
            for (ll j = i; j < mx; j *= i)
                can_remove[j] = true;
    }

    while (q--)
    {
        int x;
        cin >> x;
        vec<int> pf = prime_factors(x);
        int len = pf.size();
        bool flag = false;
        for (int i = 0; i < len; i++)
        {
            for (int j = i; j < len; j++)
            {
                int product = pf[i] * pf[j];
                if (i == j && x % product != 0)
                    continue;
                int left = x / product;

                if (can_remove[left] == 1 || left == 1)
                {
                    flag = true;
                    break;
                }
            }
            if (flag)
                break;
        }
        cout << (flag ? "YES" : "NO") << ed;
    }

    return 0;
}

// github.com/p-nerd (Shihab Mahamud)