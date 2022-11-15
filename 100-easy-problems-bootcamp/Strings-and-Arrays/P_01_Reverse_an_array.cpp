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

int main()
{
    first_io;

    int n;
    cin >> n;
    vec<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (int i = n - 1; i >= 0; i--)
    {
        cout << a[i] << " ";
    }
    cout << endn;

    return 0;
}
// Shihab Mahamud (github.com/shh26b)
// Friday, February 18, 2022 | 01:03:01 PM (+06)
