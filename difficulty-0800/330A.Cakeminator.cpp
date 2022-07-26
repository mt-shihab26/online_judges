#include <bits/stdc++.h>
using namespace std;

#define ed '\n';

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int r, c;
    cin >> r >> c;
    vector<vector<char>> a(r + 1, vector<char>(c + 1));
    for (int i = 1; i <= r; i++)
        for (int j = 1; j <= c; j++)
            cin >> a[i][j];

    int ans = 0;
    int rct = 0;

    for (int i = 1; i <= r; i++)
    {
        bool is_s = false;
        for (int j = 1; j <= c; j++)
        {
            if (a[i][j] == 'S')
            {
                is_s = true;
                break;
            }
        }
        if (is_s == false)
        {
            rct++;
            ans += c;
        }
    }

    cerr << rct << ed;

    for (int i = 1; i <= c; i++)
    {
        bool is_s = false;
        for (int j = 1; j <= r; j++)
        {
            if (a[j][i] == 'S')
            {
                is_s = true;
                break;
            }
        }
        if (is_s == false)
        {
            ans += (r - rct);
        }
    }
    cout << ans << ed;
}