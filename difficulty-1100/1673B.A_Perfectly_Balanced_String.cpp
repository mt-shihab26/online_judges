#include <bits/stdc++.h>
using namespace std;

#define str string
#define vec vector
#define endn '\n'


bool is_alright(map<char, int> mp)
{
    vec<int> v;
    for (auto i : mp)
    {
        v.push_back(i.second);
    }

    int len = v.size();
    // cout << v << endn;
    for (int i = 0; i < len; i++)
    {
        for (int j = i + 1; j < len; j++)
        {
            if (abs(v[i] - v[j]) > 1)
            {
                return false;
            }
        }
    }

    return true;
}

void solve()
{
    str s;
    cin >> s;

    bool is_balanced = true;
    int len = s.length();

    map<char, int> old_mp;

    // for (int i = 0; i < len; i++)
    // {
    //     old_mp[s[i]] = 0;
    // }

    for (int i = 0; i < len; i++)
    {
        old_mp[s[i]]++;
    }

    map<char, int> mp = old_mp;

    for (int i = 0; i < len; i++)
    {
        if (!is_alright(mp))
        {
            is_balanced = false;
            break;
        }
        mp[s[i]]--;
    }

    map<char, int> mp2 = old_mp;

    for (int i = len - 1; i >= 0; i--)
    {
        if (!is_alright(mp2))
        {
            is_balanced = false;
            break;
        }
        mp2[s[i]]--;
    }

    map<char, int> mp3 = old_mp;

    for (int i = 0, j = len - 1; i < j; i++, j--)
    {
        if (!is_alright(mp3))
        {
            is_balanced = false;
            break;
        }
        // cout << mp3 << endn;
        mp3[s[i]]--;
        mp3[s[j]]--;
    }

    // for (int i = 0; i < len; i++)
    // {
    //     for (int j = i; j < len; j++)
    //     {
    //         map<char, int> mp = old_mp;

    //         for (int z = i; z <= j; z++)
    //         {
    //             mp[s[z]]++;
    //         }
    //         is_alright(mp);
    //         if (!is_alright(mp))
    //         {
    //             is_balanced = false;
    //             break;
    //         }
    //     }
    // }

    // for (int i = 0; i < len; i++)
    // {
    //     map<char, int> mp = old_mp;
    //     for (int j = i; j < len; j++)
    //     {
    //         mp[s[j]]++;
    //     }
    //     if (!is_alright(mp))
    //     {
    //         is_balanced = false;
    //         break;
    //     }
    // }

    cout << (is_balanced ? "YES" : "NO") << endn;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
        solve();

    return 0;
}
// Shihab Mahamud (github.com/shihab4t)
