#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
#define endn "\n"

// Solve
void test_case(void)
{
    ll num;
    cin >> num;
    if (num % 2)
    {
        cout << "Impossible\n";
    }
    else
    {
        ll m = 3;
        ll n;
        while (m < num)
        {
            if (num % m == 0)
            {
                ll temp = num / m;
                if (temp % 2 == 0)
                {
                    n = temp;
                    break;
                }
            }
            m += 2;
        }
        cout << m << " " << n << endn;
    }
}

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        cout << "Case " << i << ": ";
        test_case();
    }

    return 0;
}
// Solved By: shh26b
// Friday, July 09, 2021 | 10:36:19 PM (+06)
