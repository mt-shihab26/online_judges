#include <bits/stdc++.h>
using namespace std;

#define ed '\n';
#define gp ' ';

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k;
    cin >> n >> k;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << (i == j ? k : 0) << gp;
        }
        cout << ed;
    }
}