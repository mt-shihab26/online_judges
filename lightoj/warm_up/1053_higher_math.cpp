#include <bits/stdc++.h>
using namespace std;

#define endn "\n"

void test(void)
{
    int sides[3];
    cin >> sides[0] >> sides[1] >> sides[2];
    sort(sides, sides + 3);

    if ((sides[2] * sides[2]) == sides[1] * sides[1] + sides[0] * sides[0])
    {
        cout << "yes";
    }
    else
    {
        cout << "no";
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
        test();
        cout << endn;
    }

    return 0;
}
// Solved By: shh26b
// Tuesday, July 06, 2021 | 10:23:10 AM (+06)
