#include <bits/stdc++.h>
using namespace std;

#define ed '\n'
#define gp ' '
#define lli long long int
#define vec vector
#define str string

bool solve()
{
    int n;
    char tmp;
    cin >> n;

    n *= 2;

    map<char, int> mp;

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cin >> tmp;
            if (tmp != '.')
                mp[tmp]++;
        }
    }

    for (auto ith : mp)
    {
        if (ith.second > n)
            return false;
    }

    return true;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cout << (solve() ? "YES" : "NO") << "\n";

    return 0;
}
// github.com/p-nerd (Shihab Mahamud)
// Sunday, July 17, 2022 | 12:12:45 PM (+06)
