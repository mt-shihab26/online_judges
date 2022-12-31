#include <bits/stdc++.h>
using namespace std;

using lli = long long int;
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

template <typename tp>
void print(tp arr[], int n)
{
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << '\n';
}
template <typename tp>
void print(vector<tp> &vc)
{
    for (auto &ith : vc)
        cout << ith << " ";
    cout << '\n';
}
template <typename tp>
void print(set<tp> &s)
{
    for (auto ith : s)
    {
        cout << ith << " ";
    }
    cout << endn;
}

void solve()
{
    int n;
    cin >> n;
    str s;
    cin >> s;
    int len_s = s.length();
    int ct_8 = 0;
    for (int i = 0; i < len_s; i++)
    {
        if (s[i] == '8')
        {
            ct_8++;
        }
    }
    int ct = n / 11;
    cout << min(ct, ct_8);
}

int main()
{
    first_io;

    solve();

    return 0;
}
// Shihab Mahamud (github.com/shihab4t)
// Friday, February 18, 2022 | 03:01:55 PM (+06)
