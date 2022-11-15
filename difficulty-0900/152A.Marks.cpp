#include <bits/stdc++.h>
using namespace std;

#define ed '\n'
#define gp ' '

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m, i, j, mx_index;
    cin >> n >> m;

    vector<bool> ans(n, false);
    vector<string> arr(n);

    for (i = 0; i < n; i++)
        cin >> arr[i];

    for (j = 0; j < m; j++)
    {
        mx_index = 0;
        for (i = 1; i < n; i++)
            if (arr[i][j] > arr[mx_index][j])
                mx_index = i;
        for (int i = 0; i < n; i++)
            if (arr[i][j] == arr[mx_index][j])
                ans[i] = true;
    }

    int ct = 0;
    for (auto i : ans)
    {
        if (i == true)
            ct++;
    }
    cout << ct << ed;

    return 0;
}
// shh26b (Shihab Mahamud)
// Thursday, June 30, 2022 | 06:48:56 PM (+06)
