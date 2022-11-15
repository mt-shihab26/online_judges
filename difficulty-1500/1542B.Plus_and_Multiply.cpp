#include <bits/stdc++.h>
using namespace std;

typedef long long int lli;
typedef unsigned long long int ulli;
#define endn "\n"

// Solve
void test(void)
{
    int n, a, b;
    cin >> n >> a >> b;
    int i = 0;
    bool ok = false;
    if (a == 1)
    {
        if ((n - 1) % b == 0)
        {
            ok = true;
        }
    }
    else
    {
        lli pow_a = 1;
        while (pow_a <= n)
        {
            if ((n - pow_a) % b == 0)
            {
                ok = true;
                break;
            }
            pow_a *= a;
        }
    }
    if (ok)
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }
    cout << endn;
}

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        test();
    }

    return 0;
}
// Solved By: shh26b
// Saturday, July 03, 2021 | 07:19:09 PM (+06)
