#include <bits/stdc++.h>
using namespace std;

#define endn "\n"
#define pb push_back

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    int tmp, i, j;
    int x = 0, y = 0;
    vector<int> a[3];
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < n - i; j++)
        {
            cin >> tmp;
            a[i].pb(tmp);
        }
        sort(a[i].begin(), a[i].end());
    }

    for (i = 0; i < n - 1; i++)
    {
        if (a[0][i] != a[1][i])
        {
            x = a[0][i];
            break;
        }
    }
    if (x == 0)
        x = a[0].back();

    for (i = 0; i < n - 2; i++)
    {
        if (a[1][i] != a[2][i])
        {
            y = a[1][i];
            break;
        }
    }
    if (y == 0)
        y = a[1].back();

    cout << x << endn << y << endn;
}
// Solved By: p-nerd
// Sunday, August 08, 2021 | 03:01:06 AM (+06)
