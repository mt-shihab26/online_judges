#include <bits/stdc++.h>
using namespace std;

using llint = long long int;
using str = string;

#define vec vector
#define endn '\n'
#define first_io                      \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
#define file_io                       \
    freopen("input.txt", "r", stdin); \
    freopen("output.txt", "w", stdout);
#define test_cases \
    int t;         \
    cin >> t;      \
    while (t--)    \
        solve();

template <typename tp, typename tp2>
ostream &operator<<(ostream &ostream, const pair<tp, tp2> &p)
{
    return (ostream << p.first << " " << p.second);
}
template <typename tp, typename tp2>
ostream &operator<<(ostream &ostream, const map<tp, tp2> &mp)
{
    auto end = mp.end();
    for (auto it = mp.begin(); it != end; it++)
        cout << it->first << " " << it->second << "\n";
    return ostream;
}
template <typename tp>
ostream &operator<<(ostream &ostream, const vector<tp> &v)
{
    int len = v.size();
    for (int i = 0; i < len; i++)
        cout << v[i] << " ";
    return ostream;
}
template <typename tp>
ostream &operator<<(ostream &ostream, const set<tp> &s)
{
    for (auto ith : s)
        cout << ith << " ";
    return ostream;
}
template <typename tp>
istream &operator>>(istream &istream, vector<tp> &v)
{
    int len = v.size();
    for (int i = 0; i < len; i++)
        cin >> v[i];
    return istream;
}

/* -------------------- solution start -------------------- */

void solve()
{
    int n;
    cin >> n;
    vector<int> cans(n);
    cin >> cans;

    int sum = 0;

    int i = -1, j = cans.size();
    int left_sum = 0, right_sum = 0;
    while (j - i > 1)
    {
        if (left_sum >= right_sum)
        {
            j--;
            right_sum += cans[j];
        }
        else
        {
            i++;
            left_sum += cans[i];
        }
        // cout << left_sum << " " << right_sum << endn;
        if (left_sum == right_sum)
        {
            sum = left_sum;
        }
    }

    int ct_ans = 0;

    if (sum > 0)
    {
        int tmp_sum = 0;
        for (i = 0; i < n; i++)
        {
            tmp_sum += cans[i];
            if (tmp_sum == sum)
            {
                ct_ans = i + 1;
                break;
            }
        }
        tmp_sum = 0;
        for (j = cans.size() - 1; j > 0; j--)
        {
            tmp_sum += cans[j];
            if (tmp_sum == sum)
            {
                ct_ans += n - j;
                break;
            }
        }
    }

    cout << ct_ans << endn;
}

int main()
{
    first_io;

    test_cases;

    return 0;
}
// Shihab Mahamud (github.com/shihab4t)
// Saturday, April 23, 2022 | 07:36:56 PM (+06)
