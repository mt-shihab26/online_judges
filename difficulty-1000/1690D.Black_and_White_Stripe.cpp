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
ostream &operator<<(ostream &ostream, const pair<T, T2> &p) { return (ostream << p.first << " " << p.second); }
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

void solve()
{
    int n, k;
    cin >> n >> k;
    str s;
    cin >> s;

    int i, white_ct = 0, black_ct = 0, segment_ct = 0, mn = INT_MAX;
    for (i = 0; i < n; i++)
    {
        if (s[i] == 'W')
        {
            white_ct++;
        }

        segment_ct++;

        if (segment_ct >= k)
        {
            mn = min(white_ct, mn);
            if (s[i - k + 1] == 'W')
            {
                white_ct--;
            }
        }
    }

    cout << mn;
    cout << ed;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}
// Shihab Mahamud (github.com/shihab4t)