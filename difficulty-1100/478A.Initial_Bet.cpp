#include <bits/stdc++.h>
using namespace std;

typedef long long int lli;
#define endn "\n"

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int sum = 0, temp;
    for (int i = 0; i < 5; i++)
    {
        cin >> temp;
        sum += temp;
    }

    int div = sum / 5;
    if (sum == 0)
    {
        cout << -1 << endn;
        return 0;
    }
    if (div * 5 == sum)
    {
        cout << div << endn;
    }
    else
    {
        cout << -1 << endn;
    }

    return 0;
}
// Solved By: shh26b
// Monday, June 28, 2021 | 11:52:54 PM (+06)
