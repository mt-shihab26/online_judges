#include <bits/stdc++.h>
using namespace std;
// Macros
typedef long long int lli;
typedef long double ld;
#define endn "\n"

// Solve
void test(void)
{
    int n, k;
    cin >> n >> k;
    int numbers[n], i, j;
    for (i = 0; i < n; i++)
        cin >> numbers[i];

    int dif, max = 0;
    for (i = 0; i < n; i++)
    {
        if (numbers[i] < k)
        {
            dif = k - numbers[i];
            if (dif > max)
                max = dif;
        }
    }
    cout << max << endn;
}

int main(void)
{
    int t;
    cin >> t;
    while (t--)
        test();
    return 0;
}
// shihab4t
// Tuesday, June 08, 2021 | 05:51:16 PM (+06)
