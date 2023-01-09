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
    int n;
    cin >> n;
    vec<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int i = 1;
    while (i < n - 1)
    {
        if (a[i - 1] < a[i] && a[i] > a[i + 1])
        {
            cout << "YES" << endn;
            cout << i << " " << i + 1 << " " << i + 2 << endn;
            return;
        }
        i++;
    }
    cout << "NO" << endn;
}

int main()
{
    first_io;

    test_cases;

    return 0;
}
// Solved by: Shihab Mahamud (github.com/p-nerd)
// Tuesday, February 08, 2022 | 07:08:31 AM (+06)
