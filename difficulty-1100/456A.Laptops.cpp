#include <bits/stdc++.h>
using namespace std;

#define endn '\n'
#define pb push_back

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    vector<pair<int, int>> vp;
    int tmp, tmp2;
    for (int i = 0; i < n; i++)
    {
        cin >> tmp >> tmp2;
        vp.pb({tmp, tmp2});
    }
    sort(vp.begin(), vp.end());

    for (int i = 0; i < n - 1; i++)
    {
        if (vp[i].second > vp[i + 1].second)
        {
            cout << "Happy Alex" << endn;
            return 0;
        }
    }
    cout << "Poor Alex" << endn;
}
// Solved By: shh26b
// Monday, August 09, 2021 | 12:06:14 AM (+06)
