#include <bits/stdc++.h>
using namespace std;

#define ed '\n'
#define vec vector

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    vec<pair<string, string>> allv(n);
    map<string, string> allmp;
    map<string, int> allctf, allcts;
    for (int i = 0; i < n; i++)
    {
        cin >> allv[i].first >> allv[i].second;
        allmp[allv[i].first] = allv[i].second;
        allctf[allv[i].first]++;
        allcts[allv[i].second]++;
    }

    vec<string> fn;

    for (auto i : allctf)
    {
        if (allcts[i.first] == 0)
        {
            fn.push_back(i.first);
        }
    }

    cout << fn.size() << ed;

    for (string i : fn)
    {
        cout << i << " ";
        while (allmp[i] != "")
        {
            i = allmp[i];
        }
        cout << i << ed;
    }

    return 0;
}
// Shihab Mahamud (github.com/shh26b)