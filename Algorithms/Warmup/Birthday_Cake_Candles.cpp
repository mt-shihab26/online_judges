#include <bits/stdc++.h>
using namespace std;

#define ed '\n'
#define gp ' '
#define lli long long int
#define str string
#define vec vector
#define all(x) x.begin(), x.end()

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, tmp;
    cin >> n;
    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        cin >> tmp;
        mp[tmp]++;
    }

    // C++ STL

    map<int, int>::iterator it = mp.end();
    it--;

    cout << it->second << ed;

    return 0;
}
// Shihab Mahamud (github.com/shihab4t)
// Monday, June 27, 2022 | 08:32:06 PM (+06)
