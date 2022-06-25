#include <bits/stdc++.h>
using namespace std;

template <typename T>
istream &operator>>(istream &istream, vector<T> &v)
{
    int len = v.size();
    for (int i = 0; i < len; i++)
        cin >> v[i];
    return istream;
}
template <typename T>
ostream &operator<<(ostream &ostream, const set<T> &s)
{
    for (auto ith : s)
        cout << ith << " ";
    return ostream;
}
template <typename T>
ostream &operator<<(ostream &ostream, const vector<T> &v)
{
    for (auto ith : v)
        cout << ith << " ";
    return ostream;
}
template <typename T, typename T2>
ostream &operator<<(ostream &ostream, const pair<T, T2> &p)
{
    return (ostream << p.first << " " << p.second);
}
template <typename T, typename T2>
ostream &operator<<(ostream &ostream, const map<T, T2> &mp)
{
    for (auto ith : mp)
        cout << ith << "\n";
    return ostream;
}

#define ed '\n'
#define gp ' '
#define i64 long long int
#define str string
#define vec vector
#define all(x) x.begin(), x.end()

bool solve()
{
    char bord[11][11];

    for (int i = 0; i <= 10; i++)
    {
        for (int j = 0; j <= 10; j++)
        {
            bord[i][j] = '.';
        }
    }

    for (int i = 1; i <= 8; i++)
    {
        for (int j = 1; j <= 8; j++)
        {
            cin >> bord[i][j];
        }
    }

    for (int i = 1; i <= 8; i++)
    {
        for (int j = 1; j <= 8; j++)
        {
            if (bord[i][j] == '#' && bord[i - 1][j - 1] == '#' 
            && bord[i - 1][j+1] && bord[i+1][j+1] == '#' && bord[i+1][j-1] == '#')
            {
                
                cout << i << " " << j << ed;
                return true;
            }
        }
    }
    return true;
}

bool test()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return true;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    test();

    return 0;
}
// Shihab Mahamud (github.com/shihab4t)
