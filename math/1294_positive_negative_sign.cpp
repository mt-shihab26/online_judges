#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
#define endn '\n'

void test()
{
    ll n, m;
    cin >> n >> m;
    ll minus_a = -1;
    ll first_minus = ((((2 * minus_a) + ((m - 1) * (-1))) * m) / 2);
    minus_a -= (m * 2);
    ll second_minus = ((((2 * minus_a) + ((m - 1) * (-1))) * m) / 2);
    ll dif = second_minus - first_minus;
    ll x = (n / (2 * m));
    ll sum = (((2 * first_minus) + ((x - 1) * dif)) * x) / 2;

    ll first_plus = (((2 * (m + 1)) + (m - 1)) * m) / 2;
    dif = -dif;
    sum += ((((2 * first_plus) + ((x - 1) * dif)) * x) / 2);

    cout << sum << endn;
}

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    int i = 1;
    while (t--)
    {
        cout << "Case " << i << ": ";
        i++;
        test();
    }
    // O(t);
}
// Solved By: shh26b
// Wednesday, August 11, 2021 | 03:19:07 AM (+06)
// Accepted: 04:17:20 AM (+06)
