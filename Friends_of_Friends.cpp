#include <bits/stdc++.h>
using namespace std;

#define endn '\n'
#define umap unordered_map
#define uset unordered_set
inline void first_io()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

int main(void)
{
    first_io();

    int t, fri, fft;
    uset<int> will_ff;
    umap<int, bool> mp;
    cin >> t;
    while (t--)
    {
        cin >> fri >> fft;
        mp[fri] = true;
        while (fft--)
        {
            cin >> fri;
            will_ff.insert(fri);
        }
    }
    int ct = 0;
    for (int ith : will_ff)
    {
        if (mp[ith] == false)
        {
            ct++;
        }
    }
    cout << ct << endn;
}
// Solved By: shihab4t
// Tuesday, September 21, 2021 | 12:52:13 PM (+06)