#include <bits/stdc++.h>
using namespace std;

typedef short int sint;
#define endn "\n"

void test()
{
    sint a;
    cin >> a;
    if (360 % (180 - a) == 0)
    {
        cout << "YES" << endn;
    }
    else
    {
        cout << "NO" << endn;
    }
}

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    sint t;
    cin >> t;
    while (t--)
    {
        test();
    }
}
// Solved By: shihab4t
// Friday, August 06, 2021 | 08:15:06 PM (+06)
