#include <bits/stdc++.h>
using namespace std;

#define ed '\n';

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k;
    cin >> n >> k;
    int ct = 0, tmp, dct, digit;
    for (int i = 0; i < n; i++)
    {
        cin >> tmp;
        dct = 0;
        while (tmp)
        {
            digit = tmp % 10;
            if (digit == 4 || digit == 7)
            {
                dct++;
            }
            tmp /= 10;
        }

        if (dct <= k)
        {
            ct++;
        }
    }
    cout << ct << ed;
}