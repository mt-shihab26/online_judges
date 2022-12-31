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

void solve()
{
    int n, a;
    lli ans = 0;
    cin >> n;
    map<int, int> m;
    for (int i = 1; i <= n; i++)
    {
        cin >> a;
        a = a - i;
        ans += m[a]++;
    }
    cout << ans << endn;
}

int main()
{
    first_io;

    test_cases;

    return 0;
}
// Solved by: Shihab Mahamud (github.com/shihab4t)
// Sunday, February 06, 2022 | 08:17:24 AM (+06)
