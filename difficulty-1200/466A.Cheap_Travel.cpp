#include <bits/stdc++.h>
using namespace std;
// Macros
typedef long long int lli;
typedef long double ld;
#define endn "\n"

// Solve
void test(void)
{
    int n, m, a, b;
    cin >> n >> m >> a >> b;

    int total = 0, quotient;

    if (((int)b / m) < a)
    {
        quotient = n / m;
        if (quotient == 0 && n != a)
            total = b;
        else
        {
            total = b * quotient;
            n = n % m;
            if (n)
            {
                if (b <= a)
                    total += b;
                else
                    total += n * a;
            }
        }
    }
    else
        total = n * a;
    cout << total << endn;
}

int main(void)
{
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);
    test();
    return 0;
}
// by: shh26b
