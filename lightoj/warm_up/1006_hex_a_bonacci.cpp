#include <bits/stdc++.h>
using namespace std;

#define endn '\n'

typedef long long int ll;

#define MAX_N 10000
#define EMPTY_VALUE -1

ll memo[10000 + 2];

void init()
{
    for (int i = 0; i <= MAX_N; i++)
    {
        memo[i] = EMPTY_VALUE;
    }
}

ll a, b, c, d, e, f;

ll fn(ll n)
{
    if (n == 0)
        return a;
    if (n == 1)
        return b;
    if (n == 2)
        return c;
    if (n == 3)
        return d;
    if (n == 4)
        return e;
    if (n == 5)
        return f;

    if (memo[n] != EMPTY_VALUE)
    {
        return memo[n];
    }

    memo[n] = (fn(n - 1) + fn(n - 2) + fn(n - 3) + fn(n - 4) + fn(n - 5) + fn(n - 6)) % 10000007;
    return memo[n];
}

int main()
{
    ll n, cases;
    scanf("%lld", &cases);
    for (ll caseno = 1; caseno <= cases; ++caseno)
    {
        init();
        scanf("%lld %lld %lld %lld %lld %lld %lld", &a, &b, &c, &d, &e, &f, &n);
        printf("Case %lld: %lld\n", caseno, fn(n) % 10000007);
    }

    return 0;
}
// Solved by: Shihab Mahamud (github.com/shh26b)
// Thursday, November 11, 2021 | 10:11:56 PM (+06)
