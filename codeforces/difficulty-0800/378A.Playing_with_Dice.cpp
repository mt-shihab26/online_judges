#include <bits/stdc++.h>
using namespace std;

#define ed '\n'
#define gp ' '

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a, b;
    cin >> a >> b;

    int act = 0, bct = 0, dct = 0;

    for (int i = 1; i <= 6; i++)
    {
        int abs_a = abs(i - a);
        int abs_b = abs(i - b);
        cerr << abs_a << " " << abs_b << ed;
        if (abs_a > abs_b)
            act++;
        else if (abs_a < abs_b)
            bct++;
        else
            dct++;
    }

    cout << bct << gp << dct << gp << act << ed;

    return 0;
}