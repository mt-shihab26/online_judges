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
    lli n, x, y;
    cin >> n >> x >> y;
    vec<int> a(n);
    int val = x;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        val = val ^ a[i];
    }

    if (val % 2 == y % 2)
    {
        cout << "Alice" << endn;
    }
    else
    {
        cout << "Bob" << endn;
    }
}

int main()
{
    first_io;

    test_cases;

    return 0;
}
// Solved by: Shihab Mahamud (github.com/shh26b)
